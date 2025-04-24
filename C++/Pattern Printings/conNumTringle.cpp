#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n,num=1;
        cout<<"enter the number: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }
        cout<<"do you want more nums (y/n) : ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit.........";
        }
    }
    return 0;
}

