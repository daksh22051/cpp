// Write A C Program To Input Any Alphabet And Check Whether It Is Vowel Or Consonant.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter chatacter:";
    cin>>ch;
   

    if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')) 
    {
       cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
   
}
