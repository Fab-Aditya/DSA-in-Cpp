class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int largest = 0;
       int smallest = 0;
    
        for(int i=0;i<nums.size();i++){
         if(nums[i]<nums[smallest]){
            smallest=i;
         }
          if(nums[i]>nums[largest]){
            largest=i;
         }
        }
        int n=nums.size();
       int l = min(smallest,largest);
       int r = max(smallest,largest);
       return min({r+1,n-l,l+1+n-r});
    }
};