#include <iostream>
using namespace std;
int way(int er,int ec){
    int up=0;
    int left=0;
    if(er==1 && ec==1){
        return 1;
    }
    if(er==1){
        left+=way(er,ec-1);
    }
    if(ec==1){
        up+=way(er-1,ec);
    }
    if(er>1 && ec>1){
        left+=way(er,ec-1);
        up+=way(er-1,ec);
    }
    int noOfWays=up+left;
    return noOfWays;
}
int main(){
    int n,m;
    cout<<"enter the no.of row: ";
    cin>>n;
    cout<<"enter the no.of column: ";
    cin>>m;
    int noOfWays=way(n,m);
    cout<<"the total no.of ways are : "<<noOfWays;
}