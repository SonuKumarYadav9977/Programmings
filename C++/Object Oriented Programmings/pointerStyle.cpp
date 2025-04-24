#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float marks;
    student(){

    }
    student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
void print(student* c){
    cout<<c->name<<"  "<<c->rno<<"  "<<c->marks<<endl;
}
int main(){
    student* s1 = new student("sonu",2,91.32);
    student* s2 = new student("monu",1,86.4);
    print(s2);
    print(s1);
}