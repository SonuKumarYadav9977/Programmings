#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,8,9,10,13,4,7};
    int min=arr[0];
    for(int i=1;i<sizeof(arr)/4;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min<<" is lowest";
}