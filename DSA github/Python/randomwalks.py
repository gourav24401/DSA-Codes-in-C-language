from turtle import Turtle,Screen
from random import choice
t=Turtle()
t.speed(0)
t.pensize(10)
directions=[0,90,180,270]
while True:
    t.setheading(choice(directions))
    t.forward(20)
done()