class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int count = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if (sum >= k * threshold) {
            count++;
        }
        int first = 0;
        int last = k;
        while (last < arr.size()) {
            sum += arr[last];
            last++;
            sum -= arr[first];
            first++;
            if (sum >= k * threshold) {
                count++;
            }
        }
        return count;
    }
};