#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;//if -> 5
    cout<<"enter the value of b : ";
    cin>>b;//if -> 6
    a==b&&a!=b? cout<<"1"<<endl: cout<<"0"<<endl;//0
    a>b||a<b? cout<<"1"<<endl: cout<<"0"<<endl;//1
    !(a<=b)? cout<<"1"<<endl: cout<<"0"<<endl;//0
    !a<=b? cout<<"1"<<endl: cout<<"0"<<endl;//1 !a -> a=0 & 0<b
}