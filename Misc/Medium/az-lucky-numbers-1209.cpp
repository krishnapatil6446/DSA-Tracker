// Problem    : Lucky Numbers
// Platform   : AlgoZenith (Medium)
// Link       : https://maang.in/problems/Lucky-Numbers-1209
// Topic      : Misc
// Solved on  : 2026-10-22

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int k=a; k<=b; k++){
        int i=k;
        bool flag=true;
        while(i>0){
            if(i%10 != 4 && i%10 !=7){
                flag=false;
                break;
            }
            i/=10;
        }
        if(flag==true){
            cnt++;
            cout<<k<<" ";
        }
    }
    if(cnt==0){
        cout<<-1;
    }
    return 0;

}
