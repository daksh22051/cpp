// 7. Write a C program to count total number of negative elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int a[5], max, min, i;
    int neg_count=0;

    for (i = 0; i < 5; i++)
    {
        cout << "enter element:";
        cin >> a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            neg_count++;
        }
    }
    cout<<"negative_count = "<<neg_count;
        
    

}