#!/bin/bash

# Circle calculations
echo "Circle Calculations:"
echo "Enter the radius of the circle:"
read circle_radius

area_circle=$(echo "3.14 * $circle_radius * $circle_radius" | bc)
perimeter_circle=$(echo "2 * 3.14 * $circle_radius" | bc)

echo "Area of the circle: $area_circle"
echo "Perimeter of the circle: $perimeter_circle"

# Rectangle calculations
echo "\nRectangle Calculations:"
echo "Enter the length of the rectangle:"
read rectangle_length

echo "Enter the width of the rectangle:"
read rectangle_width

area_rectangle=$(echo "$rectangle_length * $rectangle_width" | bc)
perimeter_rectangle=$(echo "2 * ($rectangle_length + $rectangle_width)" | bc)

echo "Area of the rectangle: $area_rectangle"
echo "Perimeter of the rectangle: $perimeter_rectangle"
