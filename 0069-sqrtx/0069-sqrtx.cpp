class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x,square;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long square=mid*mid;
            if(square==x){
                return mid;
            }
                if(square<x){
                  start=mid+1;

                }
                else{
                  end=mid-1 ;
                }
            }
        
        return end;
    }
};