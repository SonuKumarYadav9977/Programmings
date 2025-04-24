#include <iostream>
using namespace std;
int main(){
    char user_input;
    do{
        int n;
        cout<<"enter the hight of pyramid: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for (int j=1;j<=n-i;j++)
            {
                cout<<"  ";
            }
            for (int j=1;j<=i;j++)
            {
                cout<<static_cast<char>(j+64)<<" ";
            }
            int count=i-1;
            for (int j=1;j<=i-1;j++)
            {
                cout<<static_cast<char>(count+64)<<" ";
                count--;
            }
            cout<<endl;
        }
        cout<<"do want to go in ciza again(y/n): ";
        cin>>user_input;
    }while(user_input=='y'||user_input=='Y');
    for (int i = 0; i < 8; i++)
    {
        cout<<endl;
        if (i==7)
        {
            cout<<"exit.......";
        }
        
    }
    
}