class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inc=1;
        int dec=1;
        int m=0;
        if(n==1)return 1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                inc++;
                dec=1;
            }
            else if(nums[i-1]>nums[i]){
                dec++;
                inc=1;
            }
             m = max(m,max(inc,dec));
           if(nums[i]==nums[i-1]){
            dec=1;
            inc=1;
           }
        }
       return m;
    }
};