// 8. Write a C program to find sum of all odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int i,sum_odd=0,num;
    cout<<"enter num:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%2==1)
        {
            sum_odd = sum_odd + i;
        }
    }
    cout<<"sum_odd = "<<sum_odd;
}