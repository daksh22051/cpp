#include<iostream>
using namespace std;

class Display
{
    public:
    void add(){
        cout<<"hello"<<endl;
    }
    void add(int a)
    {
        cout<<a<<endl;
    }
    void add(int a ,int b)
    {
        cout<<a+b<<endl;
    }
};

int main()
{
    Display obj;
    obj.add();
    obj.add(5);
    obj.add(5,6);
}