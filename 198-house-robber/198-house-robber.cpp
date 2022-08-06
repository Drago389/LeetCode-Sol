class Solution {
public:
    
    // MEMOIZATION TECHNIQUE
    
    int f(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        
        int take = nums[idx] + f(idx-2,nums,dp);
        int notTake = 0 + f(idx-1,nums,dp);
        
        return dp[idx]= max(take ,notTake);
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
    }
};