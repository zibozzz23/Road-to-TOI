#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lower(vector<ll> &a, ll find1){
    int lo1 = 0;
    ll hi1 = a.size() - 1;
    ll ans1 = a.size();

    while(lo1 <= hi1){
        ll mid1 = lo1 + (hi1 - lo1) / 2;

        if(a[mid1] >= find1){
            ans1 = mid1;
            hi1 = mid1 - 1;
        }

        else{
            lo1 = mid1 + 1;
        }
    }
    return ans1;
}

ll upper(vector<ll> &b, ll find2){
    int lo2 = 0;
    ll hi2 = b.size() - 1;
    ll ans2 = b.size();

    while(lo2 <= hi2){
        ll mid2 = lo2 + (hi2 - lo2) / 2;

        if(b[mid2] > find2){
            ans2 = mid2;
            hi2 = mid2 - 1;
        }

        else{
            lo2 = mid2 + 1;
        }
    }
    return ans2;
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
        cout << upper(v, x) - lower(v, x) << "\n";
    }
}
