// 13. Write A C Program To Input Marks Of Five Subjects Physics, Chemistry, Biology,
// Mathematics, And Computer. Calculate Percentage And Grade According To Following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

// 11. Write A C Program To Input Month Number And Print the Number Of Days In That Month.
#include<iostream>
using namespace std;
int main()
{
    int phy,chem,bio,math,computer,per;
    int total;
    cout<<"enter phy:";
    cin>>phy;
    cout<<"enter chem:";
    cin>>chem;
    cout<<"enter bio:";
    cin>>bio;
    cout<<"enter math:";
    cin>>math;
    cout<<"enter computer:";
    cin>>computer;
    total = (phy + chem + bio + math + computer);
    per = total / 5;


    if(per>=90 && per<=100)
    {
        cout<<"Grade A";
    }
    else if(per>=80 && per<90)
    {
        cout<<"Grade B";
    }
    else if(per>=70 && per<80)
    {
        cout<<"Grade C";
    }
    else if(per>=60 && per<70)
    {
        cout<<"Grade D";
    }
    else if(per>=50 && per<60)
    {
        cout<<"Grade E";
    }
    else if(per>=40 && per<50)
    {
        cout<<"fail";
    }    
}

