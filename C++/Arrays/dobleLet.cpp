#include<iostream>
using namespace std;
int main(){
    int x,i,j;
    cout<<"enter the value of x: ";
    cin>>x;
    int arr[]={1,2,3,4,5,6,7,8,9,10,-1,-2,-4,-4,-5};
    for(i=0;i<sizeof(arr)/4;i++){
        for(j=0;j<sizeof(arr)/4;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
                break;
            }
        }
        if(arr[i]+arr[j]==x) break;
    }
}