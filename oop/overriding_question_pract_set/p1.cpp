// Practice 1 (Easy)

// Create a class Animal.

// Function: sound()
// Print: Animal makes sound

// Create child class Dog.

// Same function: sound()
// Print: Dog barks


#include<iostream>
using namespace std;

class Animal {
    public:
    void sound()
    {
       cout<<"Animal makes sound"<<endl; 
    }
};
class Dog{
    public:
    void sound()
    {
        cout<<"dog barks";
    }
};

int main()
{
    Animal obj_1;
    obj_1.sound();
    Dog obj_2;
    obj_2.sound();
}