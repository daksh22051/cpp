// 6. Write a C program to check whether a number is positive, negative or
// zero using switch case.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    
    switch(num1>0)
    {
        case 1:
            cout<<"num 1 is positive";
            break;
        case 0: 
            switch(num1<0)
            {
                case 1: cout<<"negative";
                        break;
                case 0: cout<<"zero";
                        break;  
            }

    }
    
}