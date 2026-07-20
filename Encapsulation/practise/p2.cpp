// Question 2 ⭐⭐

// Create a class Car.

// Private Variables
// price
// brand
// Public Functions
// setPrice()
// setBrand()
// getPrice()
// getBrand()
// Expected Output
// Brand = BMW
// Price = 6500000

#include<iostream>
using namespace std;

class Car
{
    private:
    int price;
    string brand;

    public:
    void setPrice(int p)
    {
        price = p;
    }
    int getPrice()
    {
        return price;
    }
    void setBrand(string b)
    {
        brand = b;
    }
    string getBrand()
    {
        return brand;
    }
};
int main()
{
    Car obj;
    obj.setBrand("Nike");
    obj.setPrice(100000);
    cout<<obj.getBrand()<<endl;
    cout<<obj.getPrice();
}