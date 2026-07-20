// Question 2 ⭐⭐⭐

// Create a class Area.

// Make overloaded functions:

// area(int side)          // Square
// area(int length, int breadth) // Rectangle
// area(float radius)      // Circle

// Print the calculated area.

#include<iostream>
using namespace std;

class Area
{
    public:
    void area(int side)
    {
        int a = side * side;
        cout<<"area of square = "<<a<<endl;
    }
    void area(int length , int breadth)
    {
        int b = length + breadth;
        cout<<"area of rectangle = "<<b<<endl;
    }
    void area(double radius)
    {
        int pi = 3.14;
        int c = 2 * pi * (radius * radius);
        cout<<"area of circle = "<<c<<endl;
    }
};

int main()
{
    Area obj;
    obj.area(3);
    obj.area(1,2);
    obj.area(7);
}