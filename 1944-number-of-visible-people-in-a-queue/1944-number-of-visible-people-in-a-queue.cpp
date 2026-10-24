class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        vector<int> ans(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            
            while (!s.empty() && heights[i] >= s.top()) {
                s.pop();
                ans[i]++;
            }
            if (s.size() != 0)
                ans[i]++;
            s.push(heights[i]);
        }
        return ans;
    }
};