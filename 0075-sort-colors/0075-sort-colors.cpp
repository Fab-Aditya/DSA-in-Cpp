class Solution {
public:
    void sortColors(vector<int>& arr) {
         long long n=arr.size();
    for(int i=0;i<n;i++){
        int min=i;
    
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=j;
        }   
    }
    swap(arr[i],arr[min]);
}
   }
};