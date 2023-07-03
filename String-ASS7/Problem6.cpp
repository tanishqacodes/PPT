// Given two strings s and goal, return true *if and only if* s *can become* goal *after some number of **shifts** on* s.

// A **shift** on s consists of moving the leftmost character of s to the rightmost position.

// - For example, if s = "abcde", then it will be "bcdea" after one shift.

// **Example 1:**

// **Input:** s = "abcde", goal = "cdeab"

// **Output:**

// true

#include<bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        for(int i=0;i<s.size();i++){
            if(s==goal) return true;
            // remove first ele
            s = s.substr(1)+s[0];
        }
        return false;
    }
int main(){
    string s;
    cin >> s;
    string goal;
    cin >> goal;
    cout<<rotateString(s,goal);
}