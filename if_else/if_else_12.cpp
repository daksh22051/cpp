// 12. Write A C Program To Calculate Profit Or Loss.
#include<iostream>
using namespace std;
int main()
{
    int sp,cp,profit,loss;
    cout<<"enter cp:";
    cin>>cp;
    cout<<"enter sp:";
    cin>>sp;

    if(sp>cp)
    {
       profit = sp - cp;
       cout<<"profit = "<<profit;
    }
    else if(cp>sp){
        loss = cp - sp;
        cout<<"loss = "<<loss;
    }
    else{
        cout<<"no profit no loss";
    }
   
}
