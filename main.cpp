// This program calculates the properties of a circle based on the coordinates
// of its center and a point on its circumference. It computes the radius,
// circumference, and area of the circle using various functions.

#include <iostream>
#include <cmath>

const double PI = 3.1416;

// Function to calculate the distance between two points
double calcDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Function to calculate the radius of the circle
double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    return calcDistance(centerX, centerY, pointX, pointY);
}

// Function to calculate the circumference of the circle
double calcCircumference(double radius) {
    return 2 * PI * radius;
}

// Function to calculate the area of the circle
double calcArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double centerX, centerY, pointX, pointY;

    // Input the coordinates of the center and a point on the circumference
    std::cout << "Enter the coordinates of the center of the circle (x y): ";
    std::cin >> centerX >> centerY;
    std::cout << "Enter the coordinates of a point on the circumference (x y): ";
    std::cin >> pointX >> pointY;

    // Calculate the radius, circumference, and area
    double radius = calcRadius(centerX, centerY, pointX, pointY);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    // Output the results
    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}