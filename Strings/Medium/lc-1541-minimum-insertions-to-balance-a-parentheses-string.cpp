// Problem    : 1541. Minimum Insertions to Balance a Parentheses String
// Platform   : LeetCode (Medium)
// Link       : https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
// Topic      : Strings  [String, Stack, Greedy, Bracket Sequences]
// Solved on  : 2026-10-09

class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int ans = 0;
        int n = s.size();

        for(int i = 0;i < n ; i++){
            if (s[i]=='('){
                st.push('(');
            }else{
                if(i+1<n && s[i+1]==')'){
                    i++;
                }else{
                    ans++;
                }

        if(!st.empty()){
            st.pop();
        }else{
            ans++;
        }
        }
        }
        ans+=2*st.size();
        return ans;

    }
};
