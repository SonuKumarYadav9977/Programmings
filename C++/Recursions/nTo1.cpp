#include<iostream>
using namespace std;
int num(int n){
    if(n==0) return 0;//base case
    cout<<n<<endl;//work
    num(n-1);//recuesion
    return 0;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    num(n);
}