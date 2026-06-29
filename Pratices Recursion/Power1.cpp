#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll a, ll n){
    if(n == 0){
        return 1;
    }
    return a*solve(a, n-1);
}

int main(){
    ll x, y;
    cin >> x >> y;
    cout << solve(x, y) << "\n";
}
