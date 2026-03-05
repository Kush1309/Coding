class Solution {
  public:
    int minCost(vector<int>& arr) {
         priority_queue<long long, vector<long long>, greater<long long>> pq;
         for(int i=0;i<arr.size();i++){
             pq.push(arr[i]);
         }
         
        long long cost=0;
        while(pq.size()>1){
        long long rope=pq.top();
        pq.pop();
        rope+=pq.top();
        pq.pop();
        cost=cost+rope;
        pq.push(rope);
        }
        return cost;
    }
};