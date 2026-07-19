// 2. Write a C program to print all negative elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int a[5], i, j;
    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }

    for (i = 0; i < 5; i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<endl;
        }
    }
}