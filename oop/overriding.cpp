//overriding 
#include<iostream>
using namespace std;

class Student
{
    public:
    void person()
    {
        cout<<"parent";
    }
};

class child
{
    public:
    void person()
    {
        cout<<"child";
    }
};
int main()
{
  Student obj_1;
  obj_1.person();
  child obj_2;
  obj_2.person();
}