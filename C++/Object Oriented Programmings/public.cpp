#include <iostream>
using namespace std;
class student{
    //it allow to use it publicaly and can be used by user.
    public:
    string name;
    int age;
    float marks;
};
int main(){
    student s1;
    s1.name = "john doe";
    s1.age = 20;
    s1.marks = 76.87;
}