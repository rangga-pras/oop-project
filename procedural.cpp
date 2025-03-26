#include <iostream>
#include <cmath>
using namespace std;

// Calculator functions
namespace Calculator {
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return (b != 0) ? a / b : 0; }
}

// Student functions
namespace Student {
    struct StudentData {
        string name;
        int id;
        double grade;
    };
    void display(const StudentData& s) { cout << "Student: " << s.name << " (ID: " << s.id << "), Grade: " << s.grade << endl; }
}

// Rectangle functions
namespace Rectangle {
    struct RectangleData {
        double width, height;
    };
    double area(const RectangleData& r) { return r.width * r.height; }
}

// Counter functions
namespace Counter {
    struct CounterData {
        int count;
    };
    void increment(CounterData& c) { c.count++; }
    int getCount(const CounterData& c) { return c.count; }
}

// Point functions
namespace Point {
    struct PointData {
        double x, y;
    };
    double distance(const PointData& p) { return sqrt(p.x * p.x + p.y * p.y); }
}

int main() {
    // Testing Calculator
    cout << "Addition: " << Calculator::add(10, 5) << endl;
    
    // Testing Student
    Student::StudentData s = {"John Doe", 123, 85.5};
    Student::display(s);
    
    // Testing Rectangle
    Rectangle::RectangleData rect = {4, 5};
    cout << "Rectangle Area: " << Rectangle::area(rect) << endl;
    
    // Testing Counter
    Counter::CounterData c = {0};
    Counter::increment(c);
    cout << "Counter Value: " << Counter::getCount(c) << endl;
    
    // Testing Point
    Point::PointData p = {3, 4};
    cout << "Distance from Origin: " << Point::distance(p) << endl;
    
    return 0;
}
