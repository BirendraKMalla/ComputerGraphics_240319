Bresenham Line Drawing Algorithm (BLA) in C
Overview

This project implements the Bresenham Line Drawing Algorithm (BLA) in C using the graphics library. It allows drawing lines between two points on a pixel-based display efficiently. The program supports:

All slopes (positive, negative, steep, and shallow)

Lines in all directions (all octants)

Interactive input of coordinates

Features

Rasterizes lines using integer calculations only (no floating-point arithmetic for plotting)

Works for any pair of points (x1, y1) to (x2, y2)

Handles negative slopes and lines drawn from right to left or bottom to top

How to Run

Make sure you have a C compiler and graphics.h support.

Compile the code:

gcc main.c -o line.exe -lgraphics


Run the program:

line.exe


Enter the first coordinate (x1, y1) and second coordinate (x2, y2).

To exit, enter -1 for the first coordinate.

Example Shapes

You can draw beautiful shapes by entering multiple coordinates in order:

Square:

100,100  300,100  300,300  100,300  100,100


Diamond:

150,50  250,150  150,250  50,150  150,50


Star inside Diamond:

150,100  170,150  130,150  150,100

How It Works

The algorithm determines whether the line slope is ≤1 or >1.

It calculates a decision parameter p to choose the next pixel to plot.

sx and sy are used to handle direction in all octants.

The program loops through either dx or dy steps depending on slope and plots the closest pixel at each step.

Advantages

Fast and efficient integer arithmetic

Works for all types of lines

Easy to implement and understand

Notes

Executable files (.exe) should typically be ignored in Git. Consider adding *.exe to .gitignore.

You can combine multiple sets of coordinates to create complex shapes like stars, diamonds, and geometric patterns.