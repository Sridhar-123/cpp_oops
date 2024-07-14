#include<iostream>
using namespace std;
// class 
class Actor
{
    public:
int age;
};
int main()
{
    // static allocation
    Actor srk;
    srk.age=52;
    cout<< srk.age<<endl;
}