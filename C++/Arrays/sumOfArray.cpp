#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,3,7,5,9,3,7,8,0};// 49
    int sum=0;
for(int i=0;i<sizeof(arr)/4;i++){
    sum+=arr[i];
}
cout<<sum;
}