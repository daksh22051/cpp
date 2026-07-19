// 2. Write a C program print total number of days in a month using switch
// case.

#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"enter month num:";
    cin>>month;

    switch(month)
    {
        case 1: cout<<"jan-31 days";
                break;
        case 2: cout<<"feb-30 days";
                break;
        case 3: cout<<"mar-31 days";
                break;
        case 4: cout<<"april-30 days";
                break;
        case 5: cout<<"may-31 days";
                break;
        case 6: cout<<"june-30 days";
                break;
        case 7: cout<<"july-31 days";
                break;
        case 8: cout<<"aug-31 days";
                break;
        case 9: cout<<"sept-30 days";
                break;
        case 10: cout<<"oct-31 days";
                break;
        case 11: cout<<"nov-30 days";
                break;
        case 12: cout<<"dec-31 days";
                break;
        default : cout<<"invalid choice";        
    }  
}
