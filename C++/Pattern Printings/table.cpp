#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the table: ";
        cin>>n;
        int nsp=1;
        int nst=n-1;
        for(int i=1;i<=n;i++){
            if(i==1){
                for(int j=1;j<=2*n-1;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
            //start loop
            for(int j=1;j<=nst;j++){
                cout<<"* ";
            }
            //space loop
            for(int j=1;j<=nsp;j++){
                cout<<"  ";
            }
            //star loop
            for(int j=1;j<=nst;j++){
                cout<<"* ";
            }
            nsp+=2;
            nst--;
            cout<<endl;
        }
        cout<<"do you want to continue(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit..........";

        }
    }
}