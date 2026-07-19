// 1. Write a C program to read and print elements of array. - using recursion.
#include<iostream>
using namespace std;
int main()
{
   int a[5],i,j;
   for(i=0;i<5;i++)
   {
        cout<<"enter element:";
        cin>>a[i];
   }

   for(i=0;i<5;i++)
   {
        cout<<a[i]<<endl;
   }
}