// 1. Write a C program to find a cube of any number using a function.
#include<iostream>
using namespace std;

void cube(int num)
{
    int cube;
    cout<<"enter num:";
    cin>>num;

    cube = num*num*num;
    cout<<"cube of "<<num <<" is = "<<cube;
}
int main()
{   
    cube(2);
}