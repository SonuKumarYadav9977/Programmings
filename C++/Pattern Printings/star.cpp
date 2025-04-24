#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the noumber of side: ";
        cin>>n;
        int a=n-1;
        a/=2;
        a+=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==a||j==a) cout<<"* ";
                else{
                cout<<"  ";
                }
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