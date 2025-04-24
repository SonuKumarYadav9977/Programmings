#include <iostream>
using namespace std;
class student{
    //it allow to use it publicaly and can be used by user.
    public:
    string name;
    int age;
    void setmark(float marks){
        this->marks = marks;
    }

    //private modifier do not allow other then class function to use its object and fuctions.
    private:
    float marks;
};
int main(){
    student s1;
    s1.name = "john doe";
    s1.age = 20;

    //marks will give a error

    /*s1.marks = 76.87;*/

    //to use it we can use a connecter to connect to the private object.
    s1.setmark(45.5);
}//3:32:10 time