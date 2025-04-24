#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,3,2,68,8,1};
    bool x=true;
    for(int i=0;i<sizeof(arr)/4;i++){
        for(int j=0;j<sizeof(arr)/4;j++){
            if(arr[i]==arr[j] && i!=j){
                cout<<"it has dublicate value!";
                x=false;
                break;
            }
        }
        if(x==false)
            break;
    }
    if(x==true){
        cout<<"no it does not have dublicates!";
    }
}