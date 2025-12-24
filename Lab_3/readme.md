Circle Drawing Using Bresenham’s Algorithm
Aim

To draw a circle on the screen using Bresenham’s Circle Drawing Algorithm with the help of graphics.h in C.

Theory

A computer screen is made up of discrete pixels, so a perfect mathematical circle cannot be drawn directly.
Bresenham’s Circle Algorithm solves this by selecting the nearest pixel positions to approximate a circle using only integer calculations, making it fast and efficient.

The algorithm:

Starts from the top of the circle

Uses a decision parameter to choose the next pixel

Uses 8-way symmetry to plot points in all octants of the circle

Algorithm (Brief)

Input center (xc, yc) and radius R

Initialize:

x = 0, y = R

Decision parameter p = 1 − R

Plot initial symmetric points

Repeat until x < y:

If p < 0, update p = p + 2x + 3

Else, update p = p + 2(x − y) + 5 and decrement y

Increment x

Plot all 8 symmetric points

Repeat for smaller radius to create a filled effect

Code Explanation

draw_circle()
Implements Bresenham’s circle logic and recursively draws inner circles.

symmetry()
Plots 8 symmetric pixels around the center for every calculated point.

putpixel()
Used to display pixels in different colors for visualization.

Features

Uses integer arithmetic only

Efficient and fast

Demonstrates 8-way symmetry

Creates a filled circle using recursion

Different colors used for better understanding

Input

Center of the circle (xc, yc)

Radius R

Output

A colored circle drawn on the graphics screen

Multiple concentric circles forming a filled effect

Requirements

Turbo C / Turbo C++

graphics.h

conio.h

BGI path correctly set