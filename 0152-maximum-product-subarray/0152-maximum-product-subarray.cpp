class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maximum = INT_MIN;
       int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=i;j<n;j++){
                  count=nums[j]*count;
                  maximum = max(maximum,count);
            }
           // maximum = max(maximum,count);
        }
        return maximum;
    }
};