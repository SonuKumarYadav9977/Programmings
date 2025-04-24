#include <iostream>
using namespace std;

int main() {
    int x=5,y=9;
    cout<<x<<" "<<y<<endl;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<x<<" "<<y<<endl;
        return 0;
}
