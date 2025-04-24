#include <iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    float price;
};
int main(){
    Car car1;
    car1.name="1. lambo";
    car1.color="2. yellow";
    car1.price=1286765.6576;
    Car car2;
    car2.name="1. bmw";
    car2.color="2. red";
    car2.price=575634.92;
    cout<<"             CAR 1:"<<endl;
    cout<<endl;
    cout<<car1.name<<endl;
    cout<<endl;
    cout<<car1.color<<endl;
    cout<<endl;
    cout<<"3. "<<car1.price<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"             CAR 2:"<<endl;
    cout<<endl;
    cout<<car2.name<<endl;
    cout<<endl;
    cout<<car2.color<<endl;
    cout<<endl;
    cout<<"3. "<<car2.price<<endl;
    cout<<endl;


    return 0;

}