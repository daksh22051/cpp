// 6. Write a C program to find all prime numbers between given intervals using
// functions.
#include<iostream>
using namespace std;

void prime(int start , int end)
{
    int i,j,fc=0;
    for(i=start;i<=end;i++)
    {
        fc=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fc++;
            }
        }
        if(fc==2)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int start,end;
    cout<<"enter start:";
    cin>>start;
    cout<<"enter end:";
    cin>>end;

    prime(start,end);
}