#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,8,9,10,1,4,7};
    int mn=INT_MAX;
    for(int i=1;i<sizeof(arr)/4;i++){
        mn=min(mn,arr[i]);
    }
    cout<<mn<<" is min";
}