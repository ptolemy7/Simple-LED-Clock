import busio
import board
import adafruit_is31fl3731
i2c = busio.I2C(board.SCL, board.SDA)
screen = adafruit_is31fl3731.CharlieBonnet(i2c)
i = 0
full_screen = []
for x in range(0,8):
    for y in range(0,3):
        full_screen[i] = [x,y]
        i=i+1
print(full_screen)
class number_to_print:
    def __init__(self):
        self.num = self
        self.name = name(self)
        self.on = to_be_on(self)
        self.off = with_out(self.on)

 def to_be_on(num):
#put pixel stuffs here
    if num == 0 :
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
                [2,7],
                ]
    elif num == 5:
        pixels = [[],
                    
                ]

def with_out(X=[[]]):
