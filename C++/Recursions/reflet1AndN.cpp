#include<iostream>
using namespace std;
int num(int n){//n -> 2
    if(n==0) return 0;//base case
    cout<<n<<endl;//work
    num(n-1);//recuesion
    cout<<n<<endl;//work
    return 0;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    num(n);
}