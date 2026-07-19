// 2. Write a C program to the find diameter, circumference, and area of the circle
// using functions.
#include<iostream>
using namespace std;

void circle(int radius)
{
    float cum,area,dia;
    float pi=3.14;

    cum = 2 * pi *radius;
    area = pi * radius * radius;
    dia = 2 * radius;
    cout<<"circumference of circle:"<<cum<<endl;
    cout<<"area of circle:"<<endl<<area<<endl;
    cout<<"diameter of circle:"<<dia;
}
int main()
{
    circle(5);
}
