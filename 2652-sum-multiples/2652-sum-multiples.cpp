class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
     for(int i=0;i<=n;i++){
        int x=i%3;
        int y=i%5;
        int z=i%7;
        if(x==0||y==0||z==0){
             sum=sum + i;
        }
     }
     return sum;
        
    }
};