class Solution {
public:
void subsets(vector<int> ans, vector<vector<int>>& finalans,vector<int>& nums,int indx){
    if(indx==nums.size()){
        finalans.push_back(ans);
        return;
    }
    subsets(ans,finalans,nums,indx+1);
    ans.push_back(nums[indx]);
    subsets(ans,finalans,nums,indx+1);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>finalans;
        vector<int>ans;
        subsets(ans,finalans,nums,0);

return finalans;
    }
};