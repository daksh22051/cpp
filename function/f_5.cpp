// 5. Write a C program to check whether a number is prime, Armstrong, or
// perfect number using functions.

#include<iostream>
using namespace std;
void prime(int num1)
{
    int i,fc=0;
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
}
void armstrong(int num)
{
    int temp,sum=0,i,dup;
    dup =num;
    while(num>0)
    {
        temp = num % 10;
        sum = sum + (temp * temp * temp);
        num = num / 10;
    }
    num=dup;
    if(num==sum)
    {
        cout<<"armstrong"<<endl;
    }
    else
    {
        cout<<"not armstrong"<<endl;
    }
}
void perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }
    if(num==sum)
    {
        cout<<"perfect";
    }
    else
    {
        cout<<"not perfect";
    }
}
int main()
{
    prime(3);
    armstrong(153);
    perfect(6);

}
