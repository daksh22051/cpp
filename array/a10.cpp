// 10. Write a C program to delete an element from an array at specified position.
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
    cout<<"enter position u want to delete:";
    cin>>pos;
    for(i=pos-1;i<=num-1;i++)
    {
        a[i] = a[i+1];
    }
    num--;
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }

}