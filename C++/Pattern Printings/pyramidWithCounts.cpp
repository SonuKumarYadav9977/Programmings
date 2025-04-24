#include<iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n,count=1;
        cout<<"enter the hight of the pyramid: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            for(int j=1;j<=count;j++){
                cout<<"* ";
            }
            cout<<endl;
            count+=2;
        }
        cout<<"do you want to make more pyramid(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for(int i=1;i<=8;i++){
        cout<<endl;
        if(i==7){
            cout<<"exit..........";
        }
    }
}
 