class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int element = nums[i]; // if its 4
            
            if(nums[i]>=1 && element<=n){
            int chair = element-1; // its sitting on 3
                
            if(nums[chair]!= element){
                swap(nums[chair],nums[i]);
                i--;
            }    
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]!= i+1) return i+1;
        }
        return n+1;
        
    }
};