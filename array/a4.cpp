// 4. Write a C program to find maximum and minimum element in an array. -
#include <iostream>
using namespace std;
int main()
{
    int a[5], max, min, i;

    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }
    max = min = a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}