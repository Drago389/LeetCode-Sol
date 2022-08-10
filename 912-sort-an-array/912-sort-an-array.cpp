class Solution {
public:
    // USING MIN HEAP
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
            
        }
        vector<int>ans;
        while(!minHeap.empty()){
            int t= minHeap.top();
            minHeap.pop();
            ans.push_back(t);
            
        }
        return ans;
        
    }

};