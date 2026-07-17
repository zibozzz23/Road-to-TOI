#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll dp[50];
ll c[50];

int main(){
    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        cin >> c[i];
    }
    
    dp[0] = 0;
    dp[1] = c[1];

    for(ll i = 2; i <= n; i++){
        dp[i] = min(dp[i-1], dp[i-2]) + c[i];
    }
    
    cout << dp[n];
}
