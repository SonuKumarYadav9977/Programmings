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
            int count=1;
            if(i==1){
                for(int j=1;j<=2*n-1;j++){
                    cout<<static_cast<char>(count+64)<<" ";
                    count++;
                }
                cout<<endl;
            }
            count=1;
            //start loop
            for(int j=1;j<=nst;j++){
                cout<<static_cast<char>(count+64)<<" ";
                count++;
            }
            //space loop
            for(int j=1;j<=nsp;j++){
                cout<<"  ";
                count++;
            }
            //star loop
            for(int j=1;j<=nst;j++){
                cout<<static_cast<char>(count+64)<<" ";
                count++;
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