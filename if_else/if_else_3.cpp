// 3. Write A C Program To Check Whether A Number Is Negative, Positive Or Zero.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter num1:";
    cin>>num1;
   

    if(num1>0)
    {
       cout<<"num1 is positive";
    }
    else if(num1<0){
        cout<<"num1 is negative";
    }
    else{
        cout<<"num1 is zero";
    }
   
}
