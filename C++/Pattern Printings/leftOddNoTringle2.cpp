#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the no of row: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j*2-1<<" ";
            }
            cout<<endl;
        }
        cout<<"do you want to continue(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=6;i++){
        cout<<endl;
        if(i==5){
            cout<<"exit.....";
        }
    }
}