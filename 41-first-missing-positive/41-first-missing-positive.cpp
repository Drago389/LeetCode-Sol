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

// Remember it by using the example of mother finding her children using chocolate 
// and making them sit on the chairs of their respected names