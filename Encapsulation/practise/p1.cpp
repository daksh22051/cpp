// Question 1 ⭐ (Easy)

// Create a class Student.

// Private Variable
// marks
// Public Functions
// setMarks(int m)
// getMarks()
// Expected Output
// Marks = 85

#include<iostream>
using namespace std;

class Student
{
    private:
    int marks;

    public:
    void setMarks(int m)
    {
        marks = m;
    }
    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student obj;
    obj.setMarks(100000);
    cout<<obj.getMarks();
}
