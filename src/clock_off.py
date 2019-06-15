#!/usr/bin/python3
import busio
import board
import adafruit_is31fl3731
i2c = busio.I2C(board.SCL, board.SDA)
display = adafruit_is31fl3731.CharlieBonnet(i2c)
#All this does is turn each pixel off
display.fill(0)
