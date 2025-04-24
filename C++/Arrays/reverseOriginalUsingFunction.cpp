#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    const int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    for(int i=0;i<n/2;i++){
       swap(a[i],a[n-1-i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}