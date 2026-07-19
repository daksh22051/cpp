// 16. Write a C program to enter a number and print its reverse.
#include<iostream>
using namespace std;
int main()
{  
    int num,temp,rev=0;
    cout<<"enter num:";
    cin>>num;

    while(num>0)
    {
        temp = num % 10;
        rev = (rev*10) + temp;
        num = num/10;
    }
    cout<<"rev = "<<rev;
}
 
