#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll n, ll m){
    return __gcd(n, m);
}

ll lcm(ll n, ll m){
    return n / __gcd(n, m) * m;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        ll x, y;
        cin >> x >> y;
        cout << gcd(x, y) << ' ' << lcm(x, y) << "\n";
    }
}
