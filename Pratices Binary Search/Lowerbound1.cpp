#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(vector<ll> &a, ll find){
    int lo = 0; 
    ll hi = a.size() - 1;
    ll ans = a.size();

    while(lo <= hi){
        ll mid = lo + (hi - lo) / 2;

        if(a[mid] >= find){
            ans = mid;
            hi = mid - 1;
        }

        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    while(q--){
        ll x;
        cin >> x;
        cout << solve(v, x) << "\n";
    }
}
