class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=1,n=nums.size(),end=n-2;
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            if(nums[mid-1]<nums[mid]){
                start=mid+1;

            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
    }
};