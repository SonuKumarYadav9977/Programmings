#include <iostream>
using namespace std;

int main() {
    int a=100;
    int* p=&a;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<static_cast<char>(a)<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    a==100? cout<<"yes": cout<<"no";
    cout<<endl<<endl<<"thank you";
return 0;
}
