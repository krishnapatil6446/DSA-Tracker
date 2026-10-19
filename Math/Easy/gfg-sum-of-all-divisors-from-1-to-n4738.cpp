// Problem    : Sum 1 to n Divisors
// Platform   : GeeksforGeeks (Easy)
// Link       : https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
// Topic      : Math  [Mathematics]
// Solved on  : 2026-10-19

class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long sum=0;
        
        for(int i=1; i<=n; i++){
            long long temp_sum=0;
            int j=i;
            while(j>0){
                
                if(i%j==0){
                    temp_sum+=j;
                }
                j--;
            }
            sum+=temp_sum;
        }
        return sum;
    }
};
