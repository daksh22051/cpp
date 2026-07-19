// 3. Write a C program to check whether an alphabet is vowel or
// consonant using switch case.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter character:";
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                cout<<"vowel";
                break;
        default : cout<<"consonant";
                  break;
        

    }
}