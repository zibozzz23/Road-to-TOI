#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        ans = ans ^ i ^ a;
    }
    cout << ans << "\n";
}

/*
9
9 6 4 2 3 5 7 0 1*/

// Using Claude Sonnet 4.6 convert form main to class solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        for(int i = 0; i < n; i++){
            ans = ans ^ i ^ nums[i];
        }
        return ans;
    }
};
