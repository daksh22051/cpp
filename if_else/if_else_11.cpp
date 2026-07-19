// 11. Write A C Program To Input Month Number And Print the Number Of Days In That Month.
#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"enter month number(1-12):";
    cin>>month;

    if(month==1)
    {
        cout<<"it is jan and 31 days";
    }
    else if(month==2)
    {
        cout<<"it is feb and 30 days";
    }
    else if(month==3)
    {
        cout<<"it is march and 31 days";
    }
    else if(month==4)
    {
        cout<<"it is april and 30 days";
    }
    else if(month==5)
    {
        cout<<"it is may and 31 days";
    }
    else if(month==6)
    {
        cout<<"it is june and 30 days";
    }
    else if(month==7)
    {
        cout<<"it is july and 31 days";
    }
    else if(month==8){
        cout<<"it is aug and 30 days";
    }
    else if(month==9)
    {
        cout<<"it is sept and 30 days";
    }
    else if(month==10)
    {
        cout<<"it is oct and 31 days";
    }
    else if(month==11)
    {
        cout<<"it is nov and 30 days";
    }
    else 
    {
        cout<<"it is dec and 31 days";
    }
    
}

