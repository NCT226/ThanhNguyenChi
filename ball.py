import turtle
import time
def draw(ball,x,y,r,clr):
  ball.hideturtle()
  ball.up()
  ball.setpos(x,y)
  ball.pencolor(clr)
  ball.fillcolor(clr)
  ball.begin_fill()
  ball.circle(r)
  ball.end_fill()

ball=turtle.Turtle()
ball.speed(0)
for i in range(10,500,20):
    draw(ball,i,100,25,'Blue')
    time.sleep(0.1)
    ball.clear()
turtle.mainloop()