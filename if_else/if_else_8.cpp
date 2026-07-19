// 8. Write A C Program To Input Any Character And Check Whether It Is Alphabet, Digit, Or
// Special Character.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter chatacter:";
    cin>>ch;
   

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) 
    {
       cout<<"alphabet";
    }
    else if(ch>='1' && ch<='9'){
        cout<<"digit";
    }
    else{
        cout<<"speical character";
    }
   
}
