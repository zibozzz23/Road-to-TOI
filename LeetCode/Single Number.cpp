#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ans = ans ^ x;
    }
    cout << ans << "\n";
}

// Using Claude Sonnet 4.6 convert form main to class solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            ans = ans ^ x;
        }
        return ans;
    }
};
