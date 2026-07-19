// 9. Write A C Program To Check Whether A Character Is Uppercase Or Lowercase Alphabet.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character:";
    cin>>ch;
   

    if((ch>='A' && ch<='Z'))
    {
        cout<<"uppercase Alphabet"<<"="<<ch;
    }
    else{
        cout<<"lowercase Alphabet"<<"="<<ch;
    }
   
}
