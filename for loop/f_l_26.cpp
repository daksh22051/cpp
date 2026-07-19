// 26. Write a C program to check whether a number is Prime number or not.
#include<iostream>
using namespace std;
int main()
{
    int num,i,fc=0;
    cout<<"enter num:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num % i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}

