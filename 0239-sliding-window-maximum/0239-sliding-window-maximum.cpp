class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        stack<int> s;
        vector<int> arr(n, -1);
        for (int i = n - 1; i >= 0; i--) {
            while (s.size() > 0 && nums[i]  >= nums[s.top()])
                s.pop();
            if (s.size() > 0)
                arr[i] = s.top();
            s.push(i);
        }
        vector<int> ans(n - k + 1);
        int j=0;
        for (int i = 0; i < n - k + 1; i++) {
            if (j < i) j = i;
            while (arr[j] != -1 && arr[j] < i + k){
                j = arr[j];
            }
            ans[i] = nums[j];
        }
        return ans;
    }
};