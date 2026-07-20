// Encapsulation:third party data access 
#include<iostream>
using namespace std;
class emp{
    private:                       
    int salary;


    public:
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;

    }
};
int main(){
    emp obj;
    obj.setsalary(700000);
    cout<<obj.getsalary();
}
