class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
           int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            s.push(arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && s.top()<=arr[i])s.pop();
            if(s.size()==0){
               ans[i]=-1;
            }
            else ans[i]=s.top();
            s.push(arr[i]);
                
        }
        return ans;
    }
};