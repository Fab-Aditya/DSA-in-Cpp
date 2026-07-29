class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0,k=sqrt(c);
        long long sum;
        while(i<=k){
             sum=i*i+k*k;

            if(sum==c){
                return true;
            }
            if(sum>c){
                k--;
            }
            else{
                i++;
            }
        }
       return false; 
      
        
    }
};