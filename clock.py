#!/usr/bin/python3
#This was written and designed for a 16x8  adafruit led screen,
#therefore your mileage may very but if one wanted to, one
#*should* be able to tweak this a little bit
import atexit
import time
import busio
import board
import adafruit_is31fl3731
import datetime
import sys
#The following is to shorten what would be datetime.datetime.now()
from datetime import datetime
i2c = busio.I2C(board.SCL, board.SDA)
#Change what the screen is here for whichever screen you have
screen = adafruit_is31fl3731.CharlieBonnet(i2c)
screen.blink(1100)

#This is so that all of the numbers may be broken up into sections
#that are 3(horrizontal) or 4(vertical) pixels long
#x,y: the initial coordinates for the start of the line
#b: the brightness of the pixel (controlled by the bright() function
#orr: orientation, 1:horrizontal, 0 vertical
def bit(x,y,b,orr):
	if(orr == 0):
		screen.pixel(x,y,b)
		screen.pixel(x,y-1,b)
		screen.pixel(x,y-2,b)
		screen.pixel(x,y-3,b)
	else:
		screen.pixel(x,y,b)
		screen.pixel(x-1,y,b)
		screen.pixel(x-2,y,b)

#This funciton takes a 1 or 2 digit number and seperates the number
#into its constituent digits, where place is whether the 1st or 2nd
#place after the decimal(from right to left) e.g. in '14' 1 is the
#2nd digit where 4 is the 1st
def digit(num,place):
	if(num < 10):
		if(place == 1):
			return num
		else:
			return 0
	else:
		if(place == 1):
			return (num % 10)
		else:
			return int(num/10)

#Sets the brightness differently depending on the clock of day
def bright(hr):
	if(hr<10 or hr>20):
		return 1
	else:
		return 5

#I had an extra row on the bottom, so I decided to add a second counter
#for every 5 seconds that runs along the botton of the display, it may
#blink in the future, unsure as of yet
def scounter(sec,b):
	q = int(sec/5)
	z = 0
	if sec % 2 == 0:
		b_new = b
	else:
		b_new = 0
	for z in range(4,16):
		screen.pixel(z,0,0)
		if z == 15 - q:
			screen.pixel(z,0,b_new)
#This makes sure that the hour displays correctly in 12-hr instead of
#24-hr format
def hr_display(hr):
	if(hr == 12):
		return 12
	else:
		return(hr % 12)

#This adds a little blip in the corner if it is in the pm (which for
#this particular orrientation of the screen is the origin(0,0))
def pm(hr,b):
	if(hr>11):
		screen.pixel(0,0,b)
	else:
		screen.pixel(0,0,0)

#Not only do you have to turn on all of the possible pixels for each
#number, but you also have to make sure that any which may have been
#on previously are now off, and to make this easier all of the numbers
#have been divided into groups of 3 and 4 (see hr_display). If the display
#is larger than 16x8, then this will need to be adjusted accordingly. There
#are no garuntees on how well this will scale. The coordinates are using the
#top left corner of the 3x7 block each of the numbers occupy as the origin,
#and with is particular configuration going to the right is in the negative
#directions and doing down is negative
def screen_print(num,x,y,b):
	if(num == 1):
		bit(x,y,0,0)
		bit(x,y-3,0,0)
		bit(x,y,0,1)
		bit(x-2,y,0,0)
		bit(x-2,y-3,0,0)
		bit(x,y-3,0,1)
		bit(x,y-6,0,1)
		bit(x-1,y,b,0)
		bit(x-1,y-3,b,0)
	elif(num == 2):
		bit(x-1,y,0,0)
		bit(x-1,y-3,0,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x,y-3,b,0)
		bit(x,y-6,b,1)
	elif(num == 3):
		bit(x,y-3,0,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x,y-6,b,1)
		bit(x-2,y-3,b,0)
	elif(num == 4):
		bit(x,y,0,1)
		bit(x,y-6,0,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x-2,y-3,b,0)
		bit(x,y,b,0)
	elif(num == 5):
		bit(x-2,y,0,0)
		bit(x,y-3,b,1)
		bit(x-2,y-3,b,0)
		bit(x,y,b,0)
		bit(x,y,b,1)
		bit(x,y-6,b,1)
	elif(num == 6):
		bit(x,y,0,1)
		bit(x,y-6,b,1)
		bit(x,y-3,b,1)
		bit(x-2,y-3,b,0)
		bit(x,y,b,0)
		bit(x,y-3,b,0)
	elif(num == 7):
		bit(x,y,0,0)
		bit(x,y-3,0,0)
		bit(x,y-6,0,1)
		bit(x,y-3,0,1)
		bit(x-2,y-3,b,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
	elif(num == 8):
		bit(x-2,y-3,b,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
		bit(x,y,b,0)
		bit(x,y-3,b,0)
		bit(x,y-3,b,1)
		bit(x,y-6,b,1)
	elif(num == 9):
		bit(x,y-3,0,0)
		bit(x,y-6,0,1)
		bit(x,y,b,1)
		bit(x,y,b,0)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x-2,y-3,b,0)
	elif(num == 0):
		bit(x-1,y,0,0)
		bit(x-1,y-3,0,0)
		bit(x,y-3,0,1)
		bit(x,y,b,1)
		bit(x,y,b,0)
		bit(x-2,y,b,0)
		bit(x-2,y-3,b,0)
		bit(x,y-3,b,0)
		bit(x,y-6,b,1)


def to_run_or_not_to_run(time_new,time_old,sec,i,b,X = []):
	if i == 0:
		if ((time_new % 12 == 0) or (time_new == 1)) and ( sec > 59 or sec < 1):
			time_old = -1
	if i == 1:
		if(time_new % 60 == 0) and ( sec > 59 or sec < 1):
			time_old = -1
	if time_new > time_old :
		screen_print(digit(clock[i],2),X[i],yy,b)
		screen_print(digit(clock[i],1),X[i+2],yy,b)

def off():
	for x in range(screen.width):
		for y in range(screen.height):
			screen.pixel(x,y,0)


atexit.register(off)
go = 0
#yy is the global y value for the loop coming up
yy = 7


if (len(sys.argv) >= 2 and sys.argv[1] == "--off") :
	off()
else:

	while True:
		if go == 0:
			time_old=[-1,-1,-1]
		else:
			for i in range(0,3):
				time_old[i]=clock[i]
		hr = datetime.now().hour
		mn = datetime.now().minute
		sc = datetime.now().second
		clock=[hr,mn,sc]
		hr_actual = clock[0]
		if(clock[0]>time_old[0] or time_old[0]==11):
			b = bright(clock[0])
			pm(clock[0],b)
		clock[0] = hr_display(hr_actual)
		scounter(clock[2],b)
	#This X list is a list of the x coordinate of the ancor poins for the numbers;
	#they are shuffled in order because ... for some reason that was the only way
	#my 3-AM brain could figure out how to get the loop to loop correctly, so the
	#actual order is descinding from left to right, 15,11,6,2. The y-coordinate is
	#not listed because they will all be the same at 7
		X=[15,6,11,2]
		for i in range(0,2):
			to_run_or_not_to_run(clock[i],time_old[i],clock[2],i,b,X)
		if(go == 0):
			go = 1
		time.sleep(.5)

