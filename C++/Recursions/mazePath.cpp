#include <iostream>
using namespace std;
/* right -> 1      2      2      2  */
/* down1 -> 2      1      2      2  */
/* case1 -> 1      1      2      2  */
int way(int cr,int cc,int er,int ec){
    int down=0;
    int right=0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){
        right+=way(cr,cc+1,er,ec);
    }
    if(cc==ec){
        down+=way(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        right+=way(cr,cc+1,er,ec);
        down+=way(cr+1,cc,er,ec);
    }
    int noOfWays=down+right;
    return noOfWays;
}
int main(){
    int n,m;
    cout<<"enter the no.of row: ";
    cin>>n;
    cout<<"enter the no.of column: ";
    cin>>m;
    int noOfWays=way(1,1,n,m);
    cout<<"the total no.of ways are : "<<noOfWays;
}