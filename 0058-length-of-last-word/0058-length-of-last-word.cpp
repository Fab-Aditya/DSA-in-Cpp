class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
       int count=0;
        while(n>0 && s[n-1]==' '){
 s.pop_back();
 n--;
        }
        while(n>0 && s[n-1]!=' '){
            count++;
            n--;
        
        }

return count;
        
    }
};