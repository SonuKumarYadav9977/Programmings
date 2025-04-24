#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {2,7,5,0,9,7,8,3,5,2,7,8,0,1,6,7,43,27,8,767};
    int count=0;
    int x;//5
    cout<<"enter the value of x: ";
    cin>>x;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]>x) count+=1;
    }
    cout<<count<<" number are greater than "<<x<<"!";//12
}