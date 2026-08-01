class Solution {
public:
        bool hasZero(int num){
        while (num > 0) {
            if (num % 10 == 0) {
                return true;
            }
            num = num / 10;
        }
        return false;
        }

    vector<int> getNoZeroIntegers(int n) {
            int start =0,end=n-1;
        while(start<=end){
           if(start+end==n && !hasZero(start) && !hasZero(end)){
            return {start,end};
           }
           if(start+end<n){
            start++;
           }
           else{
            end--;

           }
    }     


      return {};    
        
    }
};