#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of the cross star: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j||i+j==n+1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<"do you want to play with digonal more (y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit............";
        }
    }
    return 0;
}