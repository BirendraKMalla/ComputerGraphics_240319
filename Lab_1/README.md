DDA Line Drawing Algorithm (C Program)

This project implements the Digital Differential Analyzer (DDA) algorithm to draw a line between two user-defined points using the graphics.h library. The program runs in a loop and continues drawing new lines until the user enters -1 as the x1 coordinate.

Features

Draws a line between any two points using the DDA algorithm

Shows the coordinates of both endpoints on the graphics screen

Uses pixel-by-pixel plotting

Allows multiple line drawings in one run

Exits safely when x1 = -1

How It Works

The user enters the coordinates (x1, y1) and (x2, y2).

The program calculates

dx and dy

number of steps

x and y increments

Pixels are plotted using putpixel() after rounding the values.

The line appears on the graphics screen with point labels.

Requirements

Turbo C/C++ or any environment that supports graphics.h

BGI graphics library

C compiler

How to Run

Clone the repository

Open the project in Turbo C or a graphics-supported compiler

Compile and run the program

Enter coordinates when prompted

Enter -1 to exit

File Description

dda.c – Contains the full C program using the DDA line drawing algorithm

README.md – Project explanation and instructions

Sample Output

Drawn line on graphics screen

Labels like (x1, y1) and (x2, y2) displayed near points
