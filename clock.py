#!/usr/bin/python3
import time
import busio
import board
import adafruit_is31fl3731
import datetime
#The following is to shorten what would be datetime.datetime.now()
from datetime import datetime
i2c = busio.I2C(board.SCL, board.SDA)
display = adafruit_is31fl3731.CharlieBonnet(i2c)
#The following controls how fast any pixel marked
#as blink=True will blink
display.blink(2000)
#This is so that all of the numbers may be broken up into sections 
#that are 3(horrizontal) or 4(vertical) pixels long
def bit(x,y,b,orr):
#x,y: the initial coordinates for the start of the line
#b: the brightness of the pixel (controlled by the bright() function
#orr: orientation, 1:horrizontal, 0 vertical
	if (orr == 0):
		display.pixel(x,y,b)
		display.pixel(x,y-1,b)
		display.pixel(x,y-2,b)
		display.pixel(x,y-3,b)
	else:
		display.pixel(x,y,b)
		display.pixel(x-1,y,b)
		display.pixel(x-2,y,b)

def digit(num, place):
#This funciton takes a 1 or 2 digit number and seperates the number
#into its constituent digits, where place is whether the 1st or 2nd 
#place after the decimal(from right to left) e.g. in '14' 1 is the 
#2nd digit where 4 is the 1st
	if (num < 10):
		if (place == 1):
			return num
		else:
			return 0
	else:
		if (place == 1):
			return (num % 10)
		else:
			return int(num/10)
def print_digit(digit,x,y,b,go):
#This functions takes a single digit number(digit), a point(x,y)
#a brightness(b), and go, which is either 1 or 0, and is used
#to tell whether or not the clock was just turned out, because 
#to help with efficiency (at least that is the idea), every 
#time a number becomes a new number, the new numer only changes 
#the pixels that are different(either on or off, where off, as I
#soon learned, is always necessary). Only if the number called is the 
#first number to be drawn by the clock(i.e. after a reboot) will all 
#the necessary calls be made. These calls are also broken up into the
#3/4-pixel long segments from earlier. Order matters, pixels MUST be 
#turned off before any are turned on, or else you might have some 
#strange holes in your numbers(you have been warned)
	if (digit == 1):
		bit(x - 1,y,0,0)
		bit(x,y,0,1)
		bit(x,y,0,0)
		bit(x-2,y-3,0,0)
		bit(x,y-6,0,1)
		bit(x-2,y,0,0)
		bit(x,y-3,0,0)
		bit(x-1,y-3,b,0)
		bit(x-1,y,b,0)
	elif (digit == 2):
		bit(x-1,y-3,0,0)
		bit(x-1,y,0,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x,y-3,b,0)
		bit(x,y-6,b,1)
	elif (digit == 3):
		bit(x,y-3,0,0)
		if go == 0:
			bit(x,y,b,1)
			bit(x-2,y,b,0)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
		bit(x,y-6,b,1)
	elif (digit == 4):
		bit(x,y,0,1)
		bit(x,y-6,0,1)
		if go == 0:
			bit(x-2,y,b,0)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
		bit(x,y,b,0)
	elif (digit == 5):
		bit(x-2,y,0,0)
		if go == 0:
			bit(x,y,b,0)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
		bit(x,y,b,1)
		bit(x,y-6,b,1)
	elif (digit == 6):
		bit(x,y,0,1)
		if go == 0:
			bit(x,y,b,0)
			bit(x,y-6,b,1)
			bit(x-2,y-3,b,0)
			bit(x,y-3,b,1)
		bit(x,y-3,b,0)
	elif (digit == 7):
		bit(x,y,0,0)
		bit(x,y-3,0,1)
		bit(x,y-3,0,0)
		bit(x,y-6,0,1)
		if go == 0:
			bit(x-2,y-3,b,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
	elif (digit == 8):
		if go == 0:
			bit(x,y,b,1)
			bit(x-2,y-3,b,0)
			bit(x-2,y,b,0)
		bit(x,y-3,b,0)
		bit(x,y-6,b,1)
		bit(x,y,b,0)
		bit(x,y-3,b,1)
	elif (digit == 9):
		bit(x,y-3,0,0)
		bit(x,y-6,0,1)
		if go == 0:
			bit(x,y,b,1)
			bit(x,y-3,b,1)
			bit(x-2,y,b,0)
			bit(x,y,b,0)
			bit(x-2,y-3,b,0)
	else:
		bit(x,y-3,0,1)
		if go == 0:
			bit(x,y,b,1)
			bit(x,y,b,0)
			bit(x-2,y-3,b,0)
		bit(x,y-6,b,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,0)
def bright(hr):
#Personal prefference here for the brightness, merely
#saying that if it is either before 10AM or after 10PM,
#it should be darker than the rest of the time(found 
#that particular descision rather annoying this morning
#when I woke up at 11 to a blinding clock
    if (hr < 10):
        return 1
    elif (hr > 20):
        return 1
    else:
        return 10
def pm(hr,b):
#Funciton to determin if it is AM or PM, and turn a pixel 
#in the corner off (AM) or on (PM) respectively
    if (hr > 12):
        display.pixel(0,0,b)
    else:
        display.pixel(0,0,0)
def sblinker(sec):
	q = int(sec/5)
	z = 0
	for z in range(5,16):
		if z in range(15-q,16):
			if z == (15-q):
				display.pixel(z,0,b,blink=True)
			else:
				display.pixel(z,0,b,blink=False)
		else:
			display.pixel(z,0,0)
		if z == (15-q):
			display.pixel(z,0,b,blink=True)
	
def hr_display(hr):
#This is to make sure that the hour makes sense
#At noon and midnight, making noon read '12' 
#and midnight'00', again personal preference,
#an 'or' could easily be added to make midnight
#read 12
	if hr == 12:
		return 12
	else:
		return (hr % 12)
##############################################
###########End of function deffinitions#######
count = 0
#Count is outside of the while loop so it does not 
#get reset every second
while True:
	if count > 0:
		hr_old = hr
		mn_old = mn
		sec_old = sec
	else:
		hr_old = -1
		mn_old = -1
		sec_old = -1
	go=[0,0,0,0]
#These 3 are purely shorthand because I am rather lazy
	hr = datetime.now().hour
	mn = datetime.now().minute
	sec = datetime.now().second
#Determine the brightness
	b = bright(hr)
#Is it AM or PM?
	pm(hr,b)
#Makes sure the hour isn't funny looking
	hr_actual = hr
	hr = hr_display(hr)
	#sblinker(sec)
#This next bit means that it only updates quarters of the
#Display that have actually changed, since the loop starts 
#again every second
	if hr_old < hr_actual or (hr_old == 11 and mn > 55 and sec > 55):
		print_digit(digit(hr,2),15,7,b,go[0])
		print_digit(digit(hr,1),11,7,b,go[1])
		if digit(hr_old,2,)<digit(hr,2):
			go[0]=1
		if digit(hr_old,1,)<digit(hr,1):
			go[1]=1
	if mn_old < mn or (mn_old == 59):
		print_digit(digit(mn,2),6,7,b,go[2])
		print_digit(digit(mn,1),2,7,b,go[3])
		if digit(mn_old,2,)<digit(mn,2):
			go[2]=1
		if digit(mn_old,1,)<digit(mn,1):
			go[3]=1
	if count == 0:
		count = 1
	time.sleep(2)
