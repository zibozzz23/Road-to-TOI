#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr first
#define se second

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<ll, ll> m;
    for(int i = 1; i <= n; ++i){
        ll a;
        cin >> a;

        ll rest = a - i;
        ++ m[rest];
    }

    ll ans = 0;
    for(auto &p : m){
        ll rest = p.se; 
        ans += rest *(rest + 1) / 2;
    }
    
    cout << ans << "\n";
}
