// 4. Write a C program to check whether a number is even or odd using
// functions.
#include<iostream>
using namespace std;
void even_odd(int num1)
{
    if(num1%2==0)
    {
        cout<<"num1 is even";
    }
    else   
    {
        cout<<"num1 is odd";
    } 
}
int main()
{
    even_odd(6);
}
