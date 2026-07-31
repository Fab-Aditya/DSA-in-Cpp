class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        long long start=0,end=nums.size(),add=0;
        while(start<end){
        long long count=0;
        long long sum=0;
            for(int i=1;i<=nums[start];i++){
                if(nums[start]%i==0){
                    sum+=i;
                   count++;
                   if(count>4){
                    break;
                   }
                }
           }
           if(count==4){
                    add=add+sum;
                }
           start++;
        }
      return add;
        
    }
};