class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //initializing slow and fast pointer 
        
        int slow =nums[0];
        int fast =nums[0];
        //finding intersection of both pointers 
        do{
            slow= nums[slow]; //slow will move one space while fast pointer will move two spaces
            fast = nums[nums[fast]];
            
        }
        // now again initialize fast pointer to index 0 and now fast pointer will also jump            only 1 space 
        while(slow!=fast);
            fast=nums[0];
            while(slow!=fast){
                slow=nums[slow];
                fast=nums[fast];
            }
        
        return slow;
        
    }
};