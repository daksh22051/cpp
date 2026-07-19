// 4. Write a C program to find maximum between two numbers using
// switch case.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter num2:";
    cin>>num2;
    int result = num1>num2;

    switch(result)
    {
        case 1:
                cout<<"num 1 is max";
                break;
        case 0:
                cout<<"num 2 is max";
                break;
        default : cout<<"invalid";
    }
    
}