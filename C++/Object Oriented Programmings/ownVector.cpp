#include <iostream>
using namespace std;
class Vector{
    public:
    //objects
    int size;
    int capacity;
    int* arr;

    //constructor
    Vector(){
        capacity = 1;
        size = 0;
        arr = new int[size];
    }

    //function for adding value
    void add(int val){
        if(size==capacity){
            int* arr2 = new int[capacity*2];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++] = val;
    }

    //function for print vector
    void print(){
        for(int i=0;i<size;i++){
            cout<<this->arr[i]<<"  ";
        }
        cout<<endl;
    }

    //function for indexing
    int search(int index){
        if(index>size){
            cout<<"sorry, not found!";
            return 0;
        }
        if(index<=0){
            cout<<"please, enter a number more than  0!";
            return 0;
        }
        return arr[index-1];
    }

    //function for remove
    void remove(){
        if(size==0){
            cout<<"arr is empty!";
        }
        size--;
    }
};
int main(){
    Vector v;
    v.add(1);
    v.add(2);
    v.add(3);
    v.add(4);
    v.remove();
    v.add(5);
    v.print();
    int x;
    x = v.search(4);
    cout<<x;
}