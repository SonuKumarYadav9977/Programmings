#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n,m;
        cout<<"enter the length: ";
        cin>>n;
        cout<<"enter the breath: ";
        cin>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1||i==n|j==1||j==m){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<"do you want to continue (y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=6;i++){
        cout<<endl;
        if(i==5){
            cout<<"exit.............";
        }
    }
}