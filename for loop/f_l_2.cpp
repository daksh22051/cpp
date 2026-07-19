// 2. Write a C program to print all natural numbers in reverse (from n to 1).
// - using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int i=n;
    while(i>=1)
    {
        cout<<i<<endl;
        i--;
    }
}   