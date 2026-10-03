class Solution {
public:
void form(string s,int opening,int closing,  vector<string>& ans,int n){
    if(closing==n){
        ans.push_back(s);
        return;
    }
    if(opening<n)form( s+"(",opening+1,closing,ans,n);
    if(opening>closing)form(s+")",opening,closing+1,ans,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        form("",0,0,ans,n);
        return ans;
        
    }
};