import turtle 
def square(size):
    for i in range(4):
        turtle.forward(size)
        turtle.left(90)
colorlst=['aquamarine4','MediumOrchid3','HotPink3','VioletRed2']
for i in range(50):
    square(100)
    turtle.pencolor(colorlst[i%4])
    turtle.left(7)
square(100)
turtle.mainloop()