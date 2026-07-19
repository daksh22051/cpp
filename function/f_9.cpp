// 9. Write a C program to print all perfect numbers between given intervals using
// functions.

#include <iostream>
using namespace std;
void perfect(int start , int end)
{
    int i,sum=0,num;
    for(i=start;i<=end;i++)
    {
        num = i;
        sum=0;
        for(int j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum = sum + j;
            }
        }
        if(num==sum)
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
    perfect(start,end);

}