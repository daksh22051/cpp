// 13. Write a C program to swap first and last digits of a number.
#include<iostream>
using namespace std;
int main()
{
    int num,count=0,fdigit,ldigit,temp;
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
    temp = fdigit;
    fdigit = ldigit;
    ldigit = temp;
    cout<<"fdigit = "<<fdigit<<endl;
    cout<<"ldigit = "<<ldigit<<endl;   
}
 
