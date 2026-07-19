// 8. Write a C program to print all Armstrong numbers between given intervals
// using functions.
#include <iostream>
using namespace std;
void arm(int start , int end)
{
    int temp,sum=0,num,i;
    for(i=start;i<=end;i++)
    {
        num =i;
        sum=0;
        while(num>0)
        {
            temp = num % 10;
            sum = sum + (temp*temp*temp);
            num = num / 10;
        }
        if(sum==i)
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
    arm(start,end);

}