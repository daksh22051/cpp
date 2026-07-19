// 9. Write a C program to print multiplication table of any number.
#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter num:";
    cin>>num;

    for(i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}