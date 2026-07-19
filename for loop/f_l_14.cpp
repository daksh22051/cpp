// 14. Write a C program to calculate sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{  
    int num,temp,sum=0;
    cout<<"enter num:";
    cin>>num;

    while(num>0)
    {
        temp = num % 10;
        sum = sum + temp;
        num = num/10;
    }
    cout<<"sum = "<<sum;
}
 
