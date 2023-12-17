import turtle

def draw_fractal(fractal, angle):
    turtle.speed(0)

    for char in fractal:
        if char == "F":
            turtle.forward(15)
        elif char == "+":
            turtle.right(angle)
        elif char == "-":
            turtle.left(angle)

    turtle.done()


with open("output.txt", "r") as file:
    fractal_lines = file.readlines()

last_stage = fractal_lines[-1].split(":")[1].strip()

with open("input.txt", "r") as file:
    angle_line = file.readlines()

angle = float(angle_line[2].strip())

turtle.shapesize(0.1)

draw_fractal(last_stage, angle)