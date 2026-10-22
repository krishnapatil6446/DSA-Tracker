// Problem    : Gcd
// Platform   : AlgoZenith (Medium)
// Link       : https://maang.in/problems/Gcd-1206
// Topic      : Misc
// Solved on  : 2026-10-22

#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a,b;
    cin >> a >> b;
    if(a&&b>0){
       if(a>b){
        a=a%b;
       }else{
        b=b%a;
       }
    }
    if(a==0){
        cout << b;
    }else{
        cout << a;
    }
}
