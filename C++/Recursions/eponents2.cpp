#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    if(b%2==0)
    return pow(a,b/2)*pow(a,b/2);
    else
    return pow(a,b/2)*pow(a,b/2)*a;
}
int main(){
    int a,b;
    cout<<"enter the base: ";
    cin>>a;
    cout<<"enter the power: ";
    cin>>b;
    int ans=pow(a,b);
    cout<<"expo is : "<<ans;
}