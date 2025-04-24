#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 5;
    vector<int> v(n,2);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<sizeof(v)<<endl;
    //first observasion
    v.push_back(10);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[5];
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<sizeof(v)<<endl;
    //second observasion
    v.pop_back();
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<sizeof(v)<<endl;
}