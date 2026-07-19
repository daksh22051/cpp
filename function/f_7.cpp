// 7. Write a C program to print all strong numbers between given intervals using
// functions.
#include<iostream>
using namespace std;
void strong(int start , int end)
{
    int i,j,num,temp;
    for(i=start;i<=end;i++)
    {
        num = i;
        int sum = 0;
        while(num>0)
        {   
            temp = num % 10;//5
            int fact = 1;
            for(j=1;j<=temp;j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
            num = num/10;
        }
        if(sum == i)
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
    strong(start,end);
}