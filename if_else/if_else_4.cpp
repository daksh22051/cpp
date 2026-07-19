// 4. Write A C Program To Check Whether A Number Is Divisible By 5 And 11 Or Not.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter num1:";
    cin>>num1;
   

    if((num1%5==0) && (num1%11==0))
    {
       cout<<"num1 is divisible by 5 and 11";
    }
    else{
        cout<<"num1 is not divisible by 5 and 11";
    }
   
}
