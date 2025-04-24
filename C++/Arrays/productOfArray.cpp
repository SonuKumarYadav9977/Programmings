#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,2,3,4,5,6,7,8,9,2};// 49
    int product=1;
for(int i=0;i<sizeof(arr)/4;i++){
    product*=arr[i];
}
cout<<product;
}