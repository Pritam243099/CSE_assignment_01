#include <iostream>
using namespace std;

// Function to calculate the area of a triangle
double area(double base, double height, int isTriangle) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

int main() {
    double base, height, length, width;

    // Input
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    // Output
    cout << "Area of triangle: " << area(base, height, 1) << "\n"; 
    cout << "Area of rectangle: " << area(length, width) << "\n";

    return 0;
}
