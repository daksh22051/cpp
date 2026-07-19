// 14. Write A C Program To Input the Basic Salary Of An Employee And Calculate Its Gross
// Salary According To the Following:

// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 78%

#include<iostream>
using namespace std;
int main()
{
    float basic,hra,da,gross_profit;
    cout<<"enter basic salary:";
    cin>>basic;

    if(basic<=10000)
    {
        hra = basic * 20/100;
        da = basic * 80*100;
    }
    else if(basic<=2000)
    {
        hra = basic * 25/100;
        da = basic * 90/100;
    }
    else
    {
        hra = basic * 30/100;
        da = basic * 78/100;
    }
    gross_profit = basic + hra + da;

    cout<<"hra = "<<hra<<endl;
    cout<<"da = "<<da<<endl; 
    cout<<"gross proft"<<" = "<<gross_profit<<endl;
}