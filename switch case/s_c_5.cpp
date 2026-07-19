// 5. Write a C program to check whether a number is even or odd using
// switch case.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    
    int result = num1%2==0;

    switch(result)
    {
        case 1:
                cout<<"num 1 is even";
                break;
        case 0:
                cout<<"num 1 is odd";
                break;
        default : cout<<"invalid";
    }
    
}