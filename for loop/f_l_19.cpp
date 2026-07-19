// 19. Write a C program to enter a number and print it in words.
#include<iostream>
using namespace std;
int main()
{
    int num,temp,rev=0;
    cout<<"enter num:";
    cin>>num;
    while(num>0)
    {
        temp = num %10;
        rev = (rev*10)+temp;
        num = num / 10;
    }
    cout<<"rev = "<<rev<<endl;
    
   
    while(rev>0)
    {
        temp = rev % 10;
        switch(temp)
        {
            case 0: cout<<"zero"<<" ";
                     break;
            case 1: cout<<"first"<<" ";
                    break;
            case 2: cout<<"second"<<" ";
                    break;
            case 3: cout<<"third"<<" ";
                    break;
            case 4: cout<<"four"<<" ";
                    break;
            case 5: cout<<"five"<<" ";
                    break;
            case 6: cout<<"six"<<" ";
                    break;
            case 7: cout<<"seven"<<" ";
                    break;
            case 8: cout<<"eight"<<" ";
                    break;
            case 9: cout<<"nine"<<" ";
                    break;
            default : cout<<"invalid";
        }
        rev = rev /10;
    }
}

