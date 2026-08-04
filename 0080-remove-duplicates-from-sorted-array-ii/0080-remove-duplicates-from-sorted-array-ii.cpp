class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int start=2,end=nums.size();
       if(end<=2)return end;
        int j=2;
        while(start<end){
            if(nums[j-2]!=nums[start]){
                nums[j]=nums[start];
                j++;
            }
            start++;
        }
        return j;

    }
};