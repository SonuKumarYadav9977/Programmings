#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,8,9,10,1,4,7};
    int max1=arr[0];
    for(int i=1;i<sizeof(arr)/4;i++){
        max1=max(max1,arr[i]);
    }
    cout<<max1<<" is greatest";
}