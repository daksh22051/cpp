// Question 3 ⭐⭐⭐

// Create a Parent class named Person.

// Function name: work()

// Print:

// Person is Working

// Create a Child class named Teacher.

// Create the same function work().

// Print:

// Teacher is Teaching
// Expected Output
// Teacher is Teaching
#include<iostream>
using namespace std;

class Person
{
    public:
    void work()
    {
        cout<<"Person is Working"<<endl;

    }
};
class Teacher
{
    public:
    void work()
    {
        cout<<"Teacher is Teaching";
    }
};

int main()
{
    Person obj_1;
    obj_1.work();
    Teacher obj_2;
    obj_2.work();
}
