// 7. Write a C program to find sum of all even numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int i,sum_even=0,num;
    cout<<"enter num:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sum_even = sum_even + i;
        }
    }
    cout<<"sum_even = "<<sum_even;
}