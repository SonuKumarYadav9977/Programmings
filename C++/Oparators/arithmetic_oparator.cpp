#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<static_cast<double>(a)/static_cast<double>(b)<<endl;
    cout<<a%b<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<a;
    return 0;
}