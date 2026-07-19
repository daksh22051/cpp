// 17. Write a C program to check whether a number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{  
    int num,temp,rev=0,dup;
    cout<<"enter num:";
    cin>>num;
    dup = num;
    while(num>0)
    {
        temp = num % 10;
        rev = (rev*10) + temp;
        num = num/10;
    }
    num = dup;
    if(num==rev)
    {
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
}
 
