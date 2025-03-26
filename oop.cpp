#include <iostream>
#include <cmath>
using namespace std;

// Calculator Class
class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return (b != 0) ? a / b : 0; }
};

// Student Class
class Student {
private:
    string name;
    int id;
    double grade;
public:
    Student(string n, int i, double g) : name(n), id(i), grade(g) {}
    void display() {
        cout << "Student: " << name << " (ID: " << id << "), Grade: " << grade << endl;
    }
};

// Rectangle Class
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};

// Counter Class
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

// Point Class
class Point {
private:
    double x, y;
public:
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

// Main Function
int main() {
    // Calculator
    Calculator calc;
    cout << "Addition: " << calc.add(10, 5) << endl;
    
    // Student
    Student student("John Doe", 123, 85.5);
    student.display();
    
    // Rectangle
    Rectangle rect(4, 5);
    cout << "Rectangle Area: " << rect.area() << endl;
    
    // Counter
    Counter counter;
    counter.increment();
    cout << "Counter Value: " << counter.getCount() << endl;
    
    // Point
    Point point(3, 4);
    cout << "Distance from Origin: " << point.distanceFromOrigin() << endl;
    
    return 0;
}
