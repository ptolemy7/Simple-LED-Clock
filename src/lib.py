"""import busio
import board
import adafruit_is31fl3731
i2c = busio.I2C(board.SCL, board.SDA)
screen = adafruit_is31fl3731.CharlieBonnet(i2c)
"""
full_screen = [[0,0],
        [0,1],
        [0,2],
        [0,3],
        [0,4],
        [0,5],
        [0,6],
        [0,7],
        [1,0],
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
        [2,7],
        [1,7],
        [1,3]
        ]

print(full_screen)

class number_to_print:
    def __init__(self):
        self.num = self
        self.name = name(self)
        self.on = to_be_on(self)
        self.off = with_out(self.on)

def to_be_on(num):
    if num == 0 :
        pixels = [[0,0],
                [0,1],
                [0,2],
                [0,3],
                [0,4],
                [0,5],
                [0,7],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [2,7],
                [1,7]
                ]
    elif num == 1:
        pixels = [[1,0],
                [1,1],
                [1,2],
                [1,3],
                [1,4],
                [1,5],
                [1,6],
                [1,7]
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
                [0,7],
                [1,7],
                [2,7]
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
                [2,7],
                [1,7],
                [0,7]
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
                [2,6],
                [2,7]
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
                [2,7],
                [1,7],
                [0,7]
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
                [2,7],
                [1,7],
                [0,7],
                [0,6],
                [0,5],
                [0,4]
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
                [2,6],
                [2,7]
                ]
    elif num == 8:
        pixels = [[0,0],
                [0,1],
                [0,2]
                [0,3],
                [0,4],
                [0,5],
                [0,7],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [2,7],
                [1,7],
                [1,3]
                ]
    elif num == 9:
        pixels = [[0,0],
                [0,1],
                [0,2]
                [0,3],
                [1,0],
                [2,0],
                [2,1],
                [2,2],
                [2,3],
                [2,4],
                [2,5],
                [2,6],
                [2,7],
                [1,7],
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
    for i in X:
        for i in Y:
            if X[i] == Y[i]:
                break
        Diff[new_element] = X[i]
        return Diff
print(dif(full_screen,to_be_on(3)))
