#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,3,6,5,9,8};
    int count=0;
    if(n==1) cout<<"1";
    while(n!=1){
        n=n/2;
        count++;
    }
    cout<<count;
}