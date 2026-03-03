#include<iostream>
using namespace std;
class maxHeap{
    int *arr;
    int size;
    int length;

    public:
    maxHeap(int n){
        arr = new int[n];
        size=0;
        length=n;
    }

    //insert into heap

    void insert(int value){
        if(size==length){
            cout <<"stack overflow";
            return;
        }
        arr[size]=value;
        int index=size;
        size++;

    while(length>0 && arr[(index-1)/2]<arr[index]){
        swap(arr[(index-1)/2],arr[index]);
        index=(index-1)/2;
    }

    };

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    maxHeap h1(6);
     h1.insert(45);
    h1.insert(4);
    h1.insert(56);
    h1.insert(42);
    h1.insert(2);
    h1.insert(5);
    h1.print();
}