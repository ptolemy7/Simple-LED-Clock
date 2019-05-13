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
display.blink(2000)
def bit(x,y,b,orr):
#1:horrizontal, 0 vertical
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
    if (hr < 10):
        return 1
    elif (hr > 20):
        return 1
    else:
        return 10
def pm(hr,b):
    if (hr > 12):
        display.pixel(0,0,b)
    else:
        display.pixel(0,0,0)
def bblink(s,b):
	q =  int(s/5)
	#print(q,s)
	#for x in (16-q,16):
#		display.pixel(x,0,b,blink=True)
#	for x in (3,q+3):
#		display.pixel(x,0,0)



count = 0
while True:
	if count > 0:
		hr_old = hr
		mn_old = mn
		sec_old = sec
	else:
		hr_old = 0
		mn_old = 0
		sec_old = 0
	go1 = 0
	go2 = 0
	go3 = 0
	go4 = 0
	hr = datetime.now().hour
	mn = datetime.now().minute
	sec = datetime.now().second
	b = bright(hr)
	bblink(sec,b)
	pm(hr,b)
	hr = (hr % 12)
	if hr_old < hr:
		print_digit(digit(hr,2),15,7,b,go1)
		print_digit(digit(hr,1),11,7,b,go2)
		if digit(hr_old,2)>digit(hr,2):
			go1 = go1 + 1
		if digit(hr_old,1)>digit(hr,1):
			go2 = go2 + 1
	if mn_old < mn or mn_old == 59:
		print_digit(digit(mn,2),6,7,b,go3)
		print_digit(digit(mn,1),2,7,b,go4)
		if digit(mn_old,1)>digit(mn,1):
			go3 = go3 + 1
		if digit(mn_old,2)>digit(mn,2):
			go4 = go4 + 1
	if count == 0:
		count = 1
	time.sleep(1)
