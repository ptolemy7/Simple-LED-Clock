import busio
import board
import adafruit_is31fl3731
i2c = busio.I2C(board.SCL, board.SDA)
screen = adafruit_is31fl3731.CharlieBonnet(i2c)

#Defines a full 3x7 screen
full_screen = [[0,0],
        [0,1],
        [0,2],
        [0,3],
        [0,4],
        [0,5],
        [0,6],
        [1,0],
	    [1,1],
        [1,2],
        [1,4],
        [1,5],
        [1,6],
        [2,0],
        [2,1],
        [2,2],
        [2,3],
        [2,4],
        [2,5],
        [2,6],
        [1,3]
        ]

class number_to_print:
    def __init__(self):
        #self.num = self
        #self.name = name(self)
        self.on = to_be_on(self)
        self.off = dif(self,full_screen)
        self.turn_on = dif(self,self+1)
        self.turn_off = dif(self+1,self)

def to_be_on(num):
    #Defines the pixels for each number on a 3x7 screen
    if num == 0 :
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [0,4],
                [0,5],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [1,6],
                [0,6]
                ]
    elif num == 1:
        pixels = [[1,0],
                [1,1],
                [1,2],
                [1,3],
                [1,4],
                [1,5],
                [1,6]
                ]
    elif num == 2:
        pixels = [[0,0],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [1,2],
                [0,3],
                [0,4],
                [0,5],
                [0,6],
                [1,6],
                [2,6]
                ]
    elif num == 3:
        pixels = [[0,0],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [1,3],
                [0,3],
                [2,4],
                [2,5],
                [2,6],
                [1,6],
                [0,6]
                ]
    elif num == 4:
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [1,3],
                [2,3],
                [2,0],
                [2,1],
                [2,2],
                [2,4],
                [2,5],
                [2,6]
                ]
    elif num == 5:
        pixels = [[0,0],
                [1,0],
                [2,0],
                [0,1],
                [0,2],
                [0,3],
                [1,3],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [1,6],
                [0,6]
                ]
    elif num == 6:
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [1,3],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [1,6],
                [0,6]
                ]
    elif num == 7:
        pixels = [[0,0],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6]
                ]
    elif num == 8:
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [0,4],
                [0,5],
                [0,6],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [1,6],
                [1,3]
                ]
    elif num == 9:
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [1,3]
                ]
    else:
        print("Error!!")
    return pixels

def dif(X=[],Y=[]):
    #This *should* spit out a list of the elements of X that aren't in Y
    #However, it doesn't work both ways. It takes every element of X and
    #Checks to see if it is the same as any element in Y, if it is the same,
    #Then it stops, if it makes the check, then it adds it to the Diff list,
    #Which this funtion returns
    new_element = 0
    Diff = []
    for i in range(0,len(X)):
        new_element = 0
        for q in range(0,len(Y)):
            if X[i] == Y[q]:
                new_element=+1
            #print(i,q)
        if new_element == 0:
            Diff.append(X[i])
    return Diff

def print_to_screen(b,x,y,PIX=[]):
    #Here b is the brightness, (x,y) are the initial points, which are here
    #defined as the top left corner of the sectins of the screen for the
    #part of the clock we are working with
    for i in range(0,len(PIX)):
        screen.pixel(x+PIX[i][0],y+PIX[i][1],b)

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

def bright(hr):
	if(hr<10 or hr>20):
		return 1
	else:
		return 5

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

def pm(hr,b):
	if(hr>11):
		screen.pixel(0,0,b)
	else:
		screen.pixel(0,0,0)

def to_run_or_not_to_run(b,yy,X=[],new=[],old=[],pix=[]):
    temp = 0
    for i in range(0,2):
        if i == 0:
            if ((new[i] > old[i]) or (new[1] == 11)):
                pm(new[0])
                temp = -1
        if i == 1:
            if old[i] == 59:
                temp = -1
        if (new[i] > old[i] or temp == -1):
            print_the_stuff_to_screen(i,b,yy,new[i],X,pix)

def print_the_stuff_to_screen(i,b,yy,tempus,X=[],pix=[]):
    tens_place = digit(tempus,2)
    ones_place = digit(tempus,1)
    print_to_screen(b,X[i],yy,pix[tens_place])
    print_to_screen(b,X[i+2],yy,pix[ones_place])
