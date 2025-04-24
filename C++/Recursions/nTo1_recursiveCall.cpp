#include <iostream>
using namespace std;
void decrease(int n,int i){//recursive call
    int count=n;
    if(i>n) return;//base case
    decrease(n,i+1);//recursive call
    cout<<i<<endl;//code or work
    return;
}
int  main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    decrease(n,1);
}