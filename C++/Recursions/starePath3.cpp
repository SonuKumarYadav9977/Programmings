#include <iostream>
using namespace std;
int path(int n){//n -> 3
    if(n==1||n==0) return 1;
    if(n<0) return 0;
 // n -> 2  ->  2      n -> 1   n -> 0
    return path(n-1)+path(n-2)+path(n-3);
//          continue  stop      stop
//    2 + 1 + 1 -> 4 output -> 4
}
// dry run

// **************-------****************
// N -> 2
// if(n==1||n==0) return 1;
// if(n<0) return 0;
//       n -> 1     n -> 0    n -> -1
// return path(n-1)+path(n-2)+path(n-3);


int main(){
     int n;
     cout<<"enter the base: ";
     cin>>n;
     int ways=path(n);
     cout<<"the totall no of ways are: "<<ways;// ways -> 4;
}