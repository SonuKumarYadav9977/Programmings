#include <iostream>
using namespace std;
int path(int n){
     if(n==0||n==1) return 1;
     if(n<0) return 0;
     return path(n-1)+path(n-2);
}
int main(){
     int n;
     cout<<"enter the base: ";
     cin>>n;
     int ways=path(n);
     cout<<"the totall no of ways are: "<<ways;
}