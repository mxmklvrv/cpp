#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Default constructor
    Point() : x(0), y(0) {
        std::cout << "Default constructor\n";
    }

    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {
        std::cout << "Parameterized constructor\n";
    }

    // Copy constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Copy constructor\n";
    }

    // Copy assignment operator
    Point& operator=(const Point& other) {
        std::cout << "Copy assignment operator\n";

        // Check for self-assignment
        if (this == &other)
            return *this;

        // Copy the values
        x = other.x;
        y = other.y;

        return *this;
    }

    // Print function
    void print() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p1(10, 20); // normal constructor
    Point p2 = p1;    // copy constructor
    p2.print();

    Point p3;         
    p3 = p1;          // copy assignment operator
    p3.print();

    return 0;
}