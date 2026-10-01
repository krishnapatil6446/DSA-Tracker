// Problem    : 9. Palindrome Number
// Platform   : LeetCode (Easy)
// Link       : https://leetcode.com/problems/palindrome-number/
// Topic      : Math  [Math]
// Solved on  : 2026-10-01

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long original = x;
        long reverse = 0;

        while (x > 0) {
            long digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return original == reverse;
    }
};
