// 15. Write a C program to calculate product of digits of a number.
#include<iostream>
using namespace std;
int main()
{  
    int num,temp,mul=1;
    cout<<"enter num:";
    cin>>num;

    while(num>0)
    {
        temp = num % 10;
        mul = mul * temp;
        num = num/10;
    }
    cout<<"mul = "<<mul;
}
 
