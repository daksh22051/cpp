// Question 2 ⭐⭐

// Create a Parent class named Vehicle.

// Function name: start()

// Print:

// Vehicle Starts

// Create a Child class named Car.

// Create the same function start().

// Print:

// Car Starts
// Expected Output
// Car Starts

#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void start()
    {
        cout<<"vehicle starts"<<endl;
    }
};
class Car
{
    public:
    void start()
    {
        cout<<"car starts";
    }
};

int main()
{
    Vehicle obj_1;
    obj_1.start();
    Car obj_2;
    obj_2.start();
}