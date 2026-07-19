// 11. Write a C program to find first and last digit of a number.
#include<iostream>
using namespace std;
int main()
{
    int num,count=0,fdigit,ldigit;
    int sum;
    cout<<"enter num:";
    cin>>num;

    ldigit = num %10;
    while(num>=10)
    {
        num = num / 10;
    }
    fdigit = num;
    cout<<"fdigit = "<<fdigit<<endl;
    cout<<"ldigit = "<<ldigit<<endl; 
    sum = ldigit + fdigit;
    cout<<"sum = "<<sum;

}
 
