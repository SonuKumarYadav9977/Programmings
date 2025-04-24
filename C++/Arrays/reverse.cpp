#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    const int n=sizeof(a)/4;
    int b[n];
    int count=n-1;
    for(int i=0;i<n;i++){
        b[count]=a[i];
        count--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<"  ";
    }
}