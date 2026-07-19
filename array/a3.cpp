// 3. Write a C program to find sum of all array elements. - using recursion.
#include <iostream>
using namespace std;
int main()
{
    int a[5], i, j, sum = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    cout << "sum = " << sum;
}