// Problem    : Digits
// Platform   : AlgoZenith (Medium)
// Link       : https://maang.in/problems/Digits-1207
// Topic      : Misc
// Solved on  : 2026-10-22

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        do{
            cout << n%10 << " ";
            n = n/10;
        }while(n>0);
        cout << endl;
    }
}
