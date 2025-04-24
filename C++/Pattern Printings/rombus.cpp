#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n,m;
        cout<<"enter the length: ";
        cin>>n;
        cout<<"enter teh breath: ";
        cin>>m;
        //row loop
        for(int i=1;i<=n;i++){
            //ulta space tringle
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            //rombus
            for(int j=1;j<=m;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
            cout<<"do you to play with alphabet more? (y/n): ";
            cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int space=1;space<=6;space++){
        cout<<endl;
        if(space==5){
            cout<<"exit........";
        }
    }
}