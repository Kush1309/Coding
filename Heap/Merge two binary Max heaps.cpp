// User function Template for C++

class Solution {
  public:
  
    void heapify(vector<int>&ans,int i,int t){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<t && ans[largest]<ans[left]){
            largest=left;
        }
        if(right<t && ans[largest]<ans[right]){
            largest=right;
        }
        if(largest!=i){
            swap(ans[largest],ans[i]);
            heapify(ans,largest,t);
        }
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(b[i]);
        }
        int t=ans.size();
        for(int i=t/2-1;i>=0;i--){
            heapify(ans,i,t);
        }
        return ans;
        
    }
};