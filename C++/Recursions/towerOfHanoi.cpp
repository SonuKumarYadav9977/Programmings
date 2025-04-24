#include<iostream>
using namespace std;
int hanoi(int n,char s,char h,char d){
    if(n==0) return 0;
    hanoi(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d);
    return 0;
}
int main(){
    int n;
    cout<<"enter the number of disc: ";
    cin>>n;
    hanoi(n,'a','b','c');
}