// Question 1 ⭐⭐

// Create a class Calculator.

// Make these overloaded functions:

// add(int a, int b)
// add(int a, int b, int c)
// add(float a, float b)

#include<iostream>
using namespace std;

class Calculator
{
    public:
    void add(int a , int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a , int b , int c)
    {
        cout<<"sum of a+b+c = "<<a+b+c<<endl;
    }
    void add(double a , double b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    Calculator obj;
    obj.add(1,2);
    obj.add(1,2,3);
    obj.add(2.13,4.3);
}
