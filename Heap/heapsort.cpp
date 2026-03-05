#include<bits/stdc++.h>
using namespace std;

//tc o(n)  sc o(log n)
void heapify(int arr[],int i,int n){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }
}
void buildMaxHeap(int arr[],int n){
    for(int i=(n/2-1);i>=0;i--){
        heapify(arr,i,n);
    }
}

void sortarray(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}
int main(){
    int n =11;
    int arr[n]={14,15,12,22,17,20,18,24,23,30,13};
    buildMaxHeap(arr,n);
    sortarray(arr,n);
    print(arr,n);
}