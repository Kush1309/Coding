#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int n) {
	int largest=i;
	int left = 2*i+1;
	int right=2*i+2;

	if (left<n && arr[left]>arr[largest]) {
		largest=left;
	}
	if (right<n && arr[right]>arr[largest]) {
		largest=right;
	}

	if(largest!=i) {
		swap(arr[largest],arr[i]);
		heapify(arr,largest,n);
	}
}


void build(int arr[],int n) {
	for(int i=n/2-1; i>=0; i--) {
		heapify(arr,i,n);
	}
}


int main() {
	int n=5;
	int arr[5]= {10,60,30,50,20};
	build(arr,n);
    arr[0]=arr[n-1];
    n--;
    // heapify(arr,0,n);
    n=n+1;
    arr[n-1]=40;
    heapify(arr,0,n);
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}