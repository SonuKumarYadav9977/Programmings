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
                cout<<static_cast<char>(j+64)<<" ";
            }
            cout<<endl;
        }
        cout<<"do you want a alpahabet pyramid(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exiting.........";
        }
    }
}