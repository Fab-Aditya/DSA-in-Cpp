class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       int m=a.size()-1,n=b.size()-1;
         vector<double>nums(a.size()+b.size());
         int start=0, k=nums.size()-1;
         while(m>=0 && n>=0){
            if(a[m]>=b[n]){
                nums[k--]=a[m--];
            }
            else{
                nums[k--]=b[n--];
            }
         }
         while( m>=0){
             nums[k--]=a[m--];
         }
         while(n >= 0){
    nums[k--] = b[n--];
}

          if(nums.size() % 2 == 1){
    return nums[nums.size()/2];
}
else{
    int mid=nums.size()/2;
    return (nums[mid-1]+nums[mid])/2.0;
} 
 
       
    }  
   
};