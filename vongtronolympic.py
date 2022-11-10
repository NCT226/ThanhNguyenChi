import turtle 
def vongTron(x,y):
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
x,y=turtle.position()
#Vong1
turtle.circle(60)

#Vong2
x0,y0=turtle.position()
vongTron(x0,y0)
vongTron(x+60,y-60)
turtle.circle(60)

#Vong3
x0,y0=turtle.position()
vongTron(x0,y0)
vongTron(x-60,y-60)
turtle.circle(60)

turtle.mainloop()