class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> maxh;
        for(int i=0;i<n;i++){
            maxh.push(stones[i]);
        }
        while(n>1){
            int root1=maxh.top();
            maxh.pop();
            int root2=maxh.top();
            maxh.pop();
            int cost=root1-root2;
            maxh.push(cost);
            n--;
        }
        return maxh.top();
    }
};