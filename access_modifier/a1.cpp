#include <iostream>
using namespace std;
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


class modifier 
{
    private :
    int x = 5;

    protected:
    int y = 56;
};

class modifier_2 : public modifier{
    public:
    void show()
    {
        cout<<y<<endl;
    }
};

int main()
{
    modifier_2 obj;
    obj.show();
}