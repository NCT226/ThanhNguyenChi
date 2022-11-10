import turtle 
def Pen2Pos(x,y):
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
x,y=turtle.position()

#head 
turtle.pensize(6)
turtle.pencolor("red")
turtle.circle(60)

x0,y0=turtle.position()
Pen2Pos(x0,y0)

#lefteye
Pen2Pos(x-30,y+70)
turtle.pencolor("red")
turtle.dot(20)

#righteye
Pen2Pos(x+30,y+70)
turtle.pencolor("red")
turtle.dot(20)

#mouth
turtle.pensize(15)
Pen2Pos(x0,y0)
Pen2Pos(x-25,y+40)
turtle.forward(50)

#body
turtle.pensize(6)
Pen2Pos(x0,y0)
turtle.left(90)
turtle.pencolor("brown")
turtle.backward(90)
turtle.left(120)
turtle.pencolor("green")
turtle.backward(80)
turtle.forward(80)
turtle.right(60)
turtle.forward(80)
turtle.backward(80)
turtle.left(120)
turtle.pencolor("brown")
turtle.forward(90)
turtle.left(60)
turtle.pencolor("green")
turtle.forward(80)
turtle.backward(80)
turtle.right(120)
turtle.forward(80)
turtle.mainloop()
