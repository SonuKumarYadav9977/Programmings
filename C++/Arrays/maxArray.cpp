#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,8,9,10,1,4,7};
    int max=arr[0];
    for(int i=1;i<sizeof(arr)/4;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<" is greatest";
}