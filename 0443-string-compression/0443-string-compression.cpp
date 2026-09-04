class Solution {
public:
    int compress(vector<char>& s) {
        string ans;
        int n=s.size();
        int i=0,j=0;
        while(j<n){
            if(s[i]==s[j])j++;
            else{
                    int len = j-i;
                    ans.push_back(s[i]);
                    if(len!=1)ans += to_string(len);
                    i=j;
            }
        }
          int len = j-i;
                    ans.push_back(s[i]);
                    if(len!=1)ans+=to_string(len);

            int k=ans.size();        
          vector<char>ans2(k);
          for(int i=0;i<k;i++){
            ans2[i]=ans[i];
          }
          s=ans2;

          return s.size();
            
    }
};