#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int ans = 0;

    for(char n : a){
        ans = ans ^ n;
    }

    for(char m : b){
        ans = ans ^ m;
    }

    cout << char(ans) << "\n";
}

// Using Claude Sonnet 4.6 convert form main to class solution

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans = 0;
        for(char c : s){
            ans = ans ^ c;
        }
        for(char c : t){
            ans = ans ^ c;
        }
        return (char)ans;
    }
};
