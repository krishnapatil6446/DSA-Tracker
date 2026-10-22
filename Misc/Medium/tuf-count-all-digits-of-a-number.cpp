// Problem    : Count all Digits of a Number
// Platform   : TakeUForward (Medium)
// Link       : https://takeuforward.org/practice/dsa/count-all-digits-of-a-number
// Topic      : Misc
// Solved on  : 2026-10-22

class Solution {
public:
    int countDigit(int n) {
        int k,cnt;
        for(int i=0; i<=n; i++){
            k=n%10;
            n=n/10;
            cnt++;
        }
        return cnt;
    }
};
