// Problem    : While Loop
// Platform   : GeeksforGeeks (Medium)
// Link       : https://www.geeksforgeeks.org/problems/while-loop/1
// Topic      : Misc
// Solved on  : 2026-10-16

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    // code here
    while(x != -1){
        cout << x << " ";
        x = x - 1;
    }

    return 0;
}
