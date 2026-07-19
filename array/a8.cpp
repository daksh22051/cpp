// 8. Write a C program to copy all elements from an array to another array.
#include <iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }
    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    
        
    

}