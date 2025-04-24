#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,8,9,10,1,4,7};
    int max=arr[0];
    for(int i=1;i<sizeof(arr)/4;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<" is greatest!"<<endl;
    int max2=INT_MIN;
    for(int i=1;i<sizeof(arr)/4;i++){
        if(arr[i]>max2 && arr[i]<max) max2=arr[i];
    }
    cout<<max2<<" is second greatest!";
}