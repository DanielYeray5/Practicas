import turtle

def dibujar_tulipan():
    # Configuración inicial
    screen = turtle.Screen()
    screen.bgcolor("black")
    
    tulipan = turtle.Turtle()
    tulipan.speed(0) 
    
    # Info tallo
    tulipan.color("green")
    tulipan.penup()
    tulipan.goto(0, -200)
    tulipan.pendown()
    tulipan.left(90)
    tulipan.forward(200)
    
    # Info pétalos
    tulipan.color("yellow")
    tulipan.penup()
    tulipan.goto(0, 0)
    tulipan.pendown()
    for _ in range(36):
        tulipan.begin_fill()
        tulipan.circle(100, 60)
        tulipan.left(120)
        tulipan.circle(100, 60)
        tulipan.left(120)
        tulipan.end_fill()
        tulipan.left(10)
    
    tulipan.hideturtle()
    turtle.done()

dibujar_tulipan()
