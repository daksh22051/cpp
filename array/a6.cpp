// 6. Write a C program to count total number of even and odd elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int a[5], max, min, i;
    int even_count=0,odd_count=0;

    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"even_count = "<<even_count<<endl;
    cout<<"odd_count = "<<odd_count;
    

}