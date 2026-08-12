#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> a(n + 5);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    vector<ll> b(n + 5);
    for(int i = 1; i <= q; ++i){
        int st, en;
        cin >> st >> en;
        ++ b[st];
        -- b[en + 1];
    }

    vector<ll> sum(n + 5, 0);
    for(int i = 1; i <= n; ++i){
        sum[i] = sum[i-1] + b[i];
    }

    sort(a.begin() + 1, a.begin() + n + 1);
    sort(sum.begin() + 1, sum.begin() + n + 1);

    ll ans = 0;
    for(int i = 1; i <= n; ++i){
        ans += a[i] * sum[i];
    }

    cout << ans << "\n";
}
