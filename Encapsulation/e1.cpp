#include<iostream>
using namespace std;

class emp
{
    private:
    int salary;

    public:
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    emp obj;
    obj.setSalary(70000);
    cout<<obj.getSalary();
}