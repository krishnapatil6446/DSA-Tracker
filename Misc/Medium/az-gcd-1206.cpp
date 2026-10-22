// Problem    : Gcd
// Platform   : AlgoZenith (Medium)
// Link       : https://maang.in/problems/Gcd-1206
// Topic      : Misc
// Solved on  : 2026-10-22

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) {
        cout << b;
    } else {
        cout << a;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
