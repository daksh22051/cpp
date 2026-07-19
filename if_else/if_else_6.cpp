// 6. Write A C Program To Check Whether A Character Is Alphabet Or Not.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter chatacter (A-Z):";
    cin>>ch;
   

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
       cout<<"it is a Alphabet";
    }
    else{
        cout<<"it is not a alphabet";
    }
   
}
