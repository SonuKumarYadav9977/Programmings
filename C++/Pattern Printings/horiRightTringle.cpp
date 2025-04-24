#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the tringle: ";
        cin>>n;
        int nsp=0;
        int nst=n;
        for(int i=1;i<=n;i++){
             for(int j=1;j<=nsp;j++){
                cout<<"  ";
             }
             for(int j=1;j<=nst;j++){
                cout<<"* ";
             }
             nst--;
             nsp++;
             cout<<endl;
        }
        cout<<"do you want to use us again(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit.........";
        }
    }
}