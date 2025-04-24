#include <iostream>
using namespace std;
void space(){
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
int main(){
    char user_input;
    do{
        int n,count;
        cout<<"enter the no. of rows: ";
        cin>>n;
        count=n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j>=count){cout<<"* ";}
                else{cout<<"  ";}
            }
            cout<<endl;
                count--;
        }
        cout<<"do you want to continue(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    space();
    cout<<"exit.........";
}