#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the pyramid: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<j<<" ";
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