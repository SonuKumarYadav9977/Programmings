#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the pyramid: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            int a=i-1;
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            int count=1;
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int j=1;j<=i-1;j++){
                cout<<a<<" ";
                a--;
            }
            cout<<endl;
        }
        cout<<"do want more trys(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exiting...........";
        }
    }
}