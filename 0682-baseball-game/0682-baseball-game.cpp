class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>ans;
        int count=0;
        for(int i=0;i<n;i++){
            string x = operations[i];
              if(x=="D"){
                ans.push(ans.top()*2);
               count+=ans.top();
            }
             else if(x=="C"){
                count-=ans.top();
                ans.pop();
            }
         
           else if(x=="+"){
            int first=ans.top();
            ans.pop();
            int second=ans.top();
            ans.push(first);
           int score=first+second;
           ans.push(score);
           count+=score;

            }
              else{
                int n=stoi(x);
                ans.push(n);
                count=count+n;
            }

        }
        return count;
    }
};