#include<iostream>
using namespace std;
// class kict{
//     public:
//     void name(){
//         cout<<"hello manali"<<endl;
//     }
//     void add(int a,int b){
//         cout<<a+b<<endl;
//     }
// };

// int main(){
//     kict obj;
//     obj.name();
//     obj.add(10,20);
// }



// single 
// multilevel 
// hyarechical 
// multiple 
//hybrid



// class A{
//     public:
//     void name1(){
//         cout<<"hello parent class"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void name2(){
//         cout<<"hello child"<<endl;
//     }
// };
// int main(){
//     B obj;
//     obj.name2();
//     obj.name1();
// }


// class A{

// }
// class B:public A{

// }
// class C:public A{

// }
// class D:public B,public C{

// }



// Constructor : by default call 
//Destructor 
class kict{
    public:
    ~kict(){
        cout<<"Destructor is destroyed"<<endl;
    }
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    kict(int a,int b){
        cout<<"constructor is created"<<a+b<<endl;
    }
};
int main(){
    kict obj(23,45);
    // kict obj2()
    obj.add(23,21);
}



// //Polymorphism : overiding  / overloading
// // run time compiler  
// // overiding :same functions but different class 

// class kict{
//     public:
//     void person(){
//         cout<<"Hello Student"<<endl;
//     }
// };
// class Home{
//     public:
//     void person(){
//         cout<<"Hello child"<<endl;
//     }
// };
// int main(){
//     Home obj;
//     obj.person();

//     kict obj2;
//     obj2.person();
// }

// overloading : 
// class Display{
//     public:
//     void add(){
//         cout<<"hello world"<<endl;
//     }
//     void add(int a){
//         cout<<a<<endl;
//     }

//     void add(int a,int b){
//         cout<<a+b<<endl;
//     }
// };
// int main(){

//     Display obj;
//     obj.add(34);
// }



// Encapsulation:third party data access 
// class emp{
//     private:
//     int salary;


//     public:
//     void setsalary(int s){
//         salary=s;
//     }
//     int getsalary(){
//         return salary;

//     }
// };
// int main(){
//     emp obj;
//     obj.setsalary(700000);
//     cout<<obj.getsalary();
// }





// // Accessmodifiers : 
// class modifier{
//     private:
//     int x=42;

//     protected:
//     int y=56;
// };
// class modifier2:public modifier{
//     public:
//     void show(){
//         cout<<y;
//     }
// };
// int main(){
//     modifier2 obj;
//     obj.show();
// }



// // Errohandling :
// int main(){
//     int a=45,b=17;
//     try{
//         if(b==0){
//             throw "An error is occured";
//         }
//         cout<<a/b<<endl;
    

//     }
//     catch(const char *c){
//         cout<<c;
//     }
// }