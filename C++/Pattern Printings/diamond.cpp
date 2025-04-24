#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the diamond: ";
        cin>>n;
        int nsp=n/2;
        int nst=1;
        int cne=(n/2)+1;
        for(int i=1;i<=n;i++){
             for (int j=1;j<=nsp;j++){
                    cout<<"  ";
             }
             for(int j=1;j<=nst;j++){
                    cout<<'*'<<" ";
             }
             if (i<cne){
                nsp--;
                nst+=2;
             }
             else{
                nsp++;
                nst-=2;
             }
             cout<<endl;
        }
        cout<<"do you want to continue(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit......";
        }
    }
}