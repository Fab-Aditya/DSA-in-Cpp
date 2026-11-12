class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       int n=temp.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && temp[i]>=temp[st.top()])st.pop();
            if(st.size()==0){
                st.push(0);
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            if(ans[i]!=0){
            ans[i]=ans[i]-i;
            }
            else{
                ans[i]=ans[i];
            }
        }
        return ans;
    }
};