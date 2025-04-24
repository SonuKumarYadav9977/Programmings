#include<iostream>
using namespace std;
void rotate(int a[],int start,int end){
    for(;start<end;){
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    const int n=sizeof(a)/4;
    int k,count=1;
    cout<<"enter: ";
    cin>>k;
    k=k%n;
    rotate(a,0,n-k-1);
    rotate(a,n-k,n-1);
    rotate(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
}