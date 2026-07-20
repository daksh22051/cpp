// Question-3

// Create a class Laptop.

// Private Variables
// brand
// ram
// price
// Public Functions
// setBrand()
// setRam()
// setPrice()

// getBrand()
// getRam()
// getPrice()
// Expected Output
// Brand = HP
// RAM = 16 GB
// Price = 65000

#include<iostream>
using namespace std;

class Laptop
{
    private:
    string brand;
    string name;
    int price;

    public:
    void setBrand(string b){
        brand = b; 
    }
    string getBrand()
    {
        return brand;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setPrice(int p)
    {
        price = p;
    }
    int getPrice()
    {
        return price;
    }
};

int main()
{
    Laptop obj;
    obj.setBrand("INTEL");
    obj.setName("ASUS");
    obj.setPrice(50000);
    cout<<obj.getBrand()<<endl;
    cout<<obj.getName()<<endl;
    cout<<obj.getPrice();

}