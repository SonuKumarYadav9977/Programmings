#include<iostream>
using namespace std;
int main(){
    int x;
    bool acc=false;
    cout<<"enter the no. you want to find: ";
    cin>>x;
    int arr[]={1,2,4,2,3,4,5,6,7,8,9,2};
for(int i=0;i<sizeof(arr)/4;i++){
    if(arr[i]==x){
        cout<<"yes there is the number "<<x;
        acc=true;
        break;
    }
}
if(acc==false){
    cout<<"try again!";
}
}