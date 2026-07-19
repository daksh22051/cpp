// 10. Write a C program to count number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"enter num:";
    cin>>num;

    while(num>0)
    {
        num = num/10;
        count++;
    }
    cout<<"no of digit="<<count;
}
