class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
       int end=nums.size(),sum=0;
       for(int i=0;i<end;i++){
       sum = nums[i]*nums[i];
          ans.push_back(sum);
       } 
       sort(ans.begin(),ans.end());
     return ans;
    }
};