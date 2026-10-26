class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int>psi(n,-1);
        vector<int>nsi(n);
        stack<int>s;
      for(int i=n-1;i>=0;i--) {
        while(s.size()>0 && arr[i]<=arr[s.top()])s.pop();
             if(s.size()==0){
                 nsi[i]=n;
            }
            else{
                nsi[i]=s.top();
            }
             s.push(i);
        }
           while(s.size()>0)s.pop();
        int maximum = 0;
         for(int i=0;i<n;i++){
        while(s.size()>0 && arr[i]<=arr[s.top()])s.pop();
             if(s.size()==0){
                psi[i]=-1;
            }
            else{
                psi[i]=s.top();
            }
             s.push(i);
        }
    
        for(int i=0;i<n;i++){
            int w=nsi[i]-psi[i]-1;
           int height=arr[i];
            int area=height*w;

             maximum = max(maximum,area);
        }
        return maximum;
    }
};