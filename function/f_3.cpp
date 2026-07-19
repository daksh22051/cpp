// 3. Write a C program to find the maximum and minimum between two
// numbers using functions.
#include<iostream>
using namespace std;
void max_min(int num1 , int num2)
{
    if(num1>num2)
    {
        cout<<"num1 is max";
    }
    else if(num2>num1)   
    {
        cout<<"num2 is max";
    }
    else
    {
        cout<<"both num are equal";
    }
}
int main()
{
    max_min(11,7);
}
