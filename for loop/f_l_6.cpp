// 6. Write a C program to find sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,num;
    cout<<"enter num:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    cout<<"sum = "<<sum;
}