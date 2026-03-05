#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int t=5;
    int arr[n]={2,4,8,6,10};
    priority_queue<int> maxh;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
    }
    int cost=0;
    while(t>0){
        int root=maxh.top();
        maxh.pop();
        cost=root+cost;
        int half=root/2;
        maxh.push(half);
        t--;
    }
    cout<<cost;
}