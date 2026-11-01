class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int>ans(n,-1);
       stack<int>s;
       for(int i=n-1;i>=0;i--){
        while(s.size()>0 && nums[i]>=nums[s.top()])s.pop();
        if(s.size()>0){
            ans[i]=s.top();
        }
        s.push(i);
       }
        vector<int>ans1(n-k+1);
        int j=0;
        for(int i=0;i<n-k+1;i++){
            if(j<i)j=i;
            while(ans[j]!=-1 && ans[j]<i+k){
                j=ans[j];
            }
                ans1[i]=nums[j];
        }
       
         return ans1;
    }
};