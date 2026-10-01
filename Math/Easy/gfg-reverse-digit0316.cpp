// Problem    : Reverse Digits
// Platform   : GeeksforGeeks (Easy)
// Link       : https://www.geeksforgeeks.org/problems/reverse-digit0316/1
// Topic      : Math  [Mathematics]
// Solved on  : 2026-10-01

class Solution {
public:
    int reverseDigits(int n) {
        int reverse = 0;

        while (n > 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }

        return reverse;
    }
};
