// 22. Write a C program to find all factors of a number.
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter num:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num % i==0)
        {
            cout<<i<<" ";
        }
    }
}

