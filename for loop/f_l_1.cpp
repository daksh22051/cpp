// 1.) Write a C program to print all natural numbers from 1 to n. - using while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter n:";
    cin>>n;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}   