#!/usr/bin/python3

import time
import datetime
from datetime import datetime

#Defining constant and/or gobal variables here
go = 0
yy = 7
X=[15,6,11,2]
clock_new[3]
while True:
    if go == 0:
        clock_old=[-1,-1,-1]
    else:
        for i in range(0,3):
            clock_old[i]=clock_new[i]
    clock_new[0] = datetime.now().hour
    clock_new[1] = datetime.now().minute
    clock_new[2] = datetime.now().second
    hr_24 = clock[0]
    if(clock_new[0] > clock_old[0] or clock_old[0] == 11):
        b = bright(clock_new[0])
        pm(clock_new[0])
    scounter(clock_new[2],b)
