#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void hello()
    {
        cout << "Hello from " << name << endl;
    }

    void total()
    {
        cout << "Total mark of " << name << " = " << math+english << endl;
    }
};

int main()
{
    Student sohag("Nure Alam", 23, 80, 80);
    sohag.hello();
    sohag.total();
    Student saymon("Shahporan", 25, 80, 80);
    saymon.hello();
    saymon.total();
    return 0;
}