class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int first = 0;
        int last = k;
        int maxi = sum;
        while (last < nums.size()) {
            sum += nums[last];
            last++;
            sum -= nums[first];
            first++;
            maxi = max(sum, maxi);
        }
        return (double)maxi / k;
    }
};