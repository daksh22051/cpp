// 9. Write a C program to insert an element in an array.
#include<iostream>
using namespace std;
int main()
{
    int a[5],i,num;
    int pos,element;
    cout<<"enter size:";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"enter element:";
        cin>>a[i];
    }
    cout<<"enter position:";
    cin>>pos;
    cout<<"enter element:";
    cin>>element;

    for(i=num;i>=pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = element;
    num++;


    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }

}