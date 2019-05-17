!/usr/bin/python3
import time
import busio
import board
import adafruit_is31fl3731
import datetime
#The following is to shorten what would be datetime.datetime.now()
from datetime import datetime
i2c = busio.I2C(board.SCL, board.SDA)
screen = adafruit_is31fl3731.CharlieBonnet(i2c)
go=[0,0,0,0]
while True:
	if count > 0:
		for i in range(0,3):
			time_old[i]=time[i]
	else:
		time_old=[-1,-1,-1]
	time[0] = datetime.now().hour
	time[1] = datetime.now().minute
	time[2] = datetime.now().second
	b = bright(time[0])
	hr_actual = time[0]
	time[0] = hr_display(hr_actual)
	scounter(time[2],b)
	for i in range(0,3):
		print_time(time[i],time_old[i],b,go)
	time.sleep(1)
	


#################################################################
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

#Sets the brightness differently depending on the time of day
def bright(hr):
	if(hr<10 or hr>20):
		return 1
	else:
		return 5 

#I had an extra row on the bottom, so I decided to add a second 
#counter for every 5 seconds 
def scounter(sec,b):
	q = int(sec/5)
	z = 0
	for z in range(5,16):
		if z in range(15-q,16):
			screen.pixel(z,0,b)
		else:
			screen.pixel(z,0,0)

#This makes sure that the hour displays correctly
def hr_display(hr):
	if(hr == 12):
		return 12
	else:
		return(hr % 12)

#This adds a little blip in the corner if it is in the pm
def pm(hr,b):
	if(hr>11):
		screen.pixel(0,0,b)
	else:
		screen.pixel(0,0,0)

def screen_print(num,x,y,b,go):
	if(num == 1):
		bit(x,y,0,0)
		bit(x,y-3,0,0)
		bit(x,y,0,1)
		bit(x-2,y,0,0)
		bit(x-2,y-3,0,0)
		bit(x,y-3,0,1)
		bit(x,y-6,0,1)
		bit(x-1,y,b,0)
		bit(x-1,y,b,0)
	elif(num == 2):
		if(go != 0):
			bit(x-1,y,0,0)
			bit(x-1,y-3,0,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
		bit(x,y-3,b,1)
		bit(x,y-3,b,0)
		bit(x,y-6,b,1)
	elif(num == 3):
		if(go != 0):
			bit(x,y-3,0,0)
		else:
			bit(x,y,b,1)
			bit(x-2,y,b,0)
			bit(x,y-3,b,1)
			bit(x,y-6,b,1)
		bit(x-2,y-3,b,0)
	elif(num == 4):
		if(go != 0):
			bit(x,y,0,1)
			bit(x,y-3,0,1)
		else:
			bit(x-2,y,b,0)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
		bit(x,y,b,0)
	elif(num == 5):
		if(go != 0):
			bit(x-2,y,0,0)
		else:
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
			bit(x,y,b,0)
		bit(x,y,b,1)
		bit(x,y-6,b,1)
	elif(num == 6):
		if(go !=0 ):
			bit(x,y,0,1)
		else:
			bit(x,y-6,b,1)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
			bit(x,y,b,0)
		bit(x,y-3,b,0)
	elif(num == 7):
		if(go != 0):
			bit(x,y,0,0)
			bit(x,y-3,0,0)
			bit(x,y-6,0,1)
			bit(x,y-3,0,1)
		else:
			bit(x-2,y-3,b,0)
		bit(x,y,b,1)
		bit(x-2,y,b,0)
	elif(num == 8):
		if(go == 0):
			bit(x-2,y-3,b,0)
			bit(x,y,b,1)
			bit(x-2,y,b,0)
		else:
			bit(x,y,b,0)
			bit(x,y-3,b,0)
			bit(x,y-3,b,1)
			bit(x,y-6,b,1)
	elif(num == 9):
		if(go != 0):
			bit(x,y-3,0,0)
			bit(x,y-6,0,1)
		else:
			bit(x,y,b,1)
			bit(x,y,b,0)
			bit(x-2,y,b,0)
			bit(x,y-3,b,1)
			bit(x-2,y-3,b,0)
	elif(num == 0):
		if(go != 0):
			bit(x-1,y,0,0)
			bit(x-1,y-3,0,0)
			bit(x,y-3,0,1)
		else:
			bit(x,y,b,1)
			bit(x,y,b,0)
			bit(x-2,y,b,0)
			bit(x-2,y-3,b,0)
		bit(x,y-3,b,1)
		bit(x,y-6,b,1)

def print_time(time[i],time_old[i],b,go):
	if(time[i]>time_old[i]):
		screen_print(digit(time[i],1),b,go[i])
		screen_print(digit(time[i],2),b,go[i+2])
		for j in (i,i+2):
			i( go[j] == 0):
				global go[j]=1
	if(i == 0):
		if (time[i] == 11):
			screen_print(digit(time[i],1),b,go[i])
			screen_print(digit(time[i],2),b,go[i+2])



