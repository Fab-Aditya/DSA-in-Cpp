class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0,end=nums.size();
        bool increasing = true;
        bool decreasing = true;
        for(i=0;i<end-1;i++){
            if(nums[i]<nums[i+1]) 
           decreasing = false;
             else if(nums[i]>nums[i+1]) 
           increasing = false;    
            
             
        }
        return increasing || decreasing;
        
        
    }
};