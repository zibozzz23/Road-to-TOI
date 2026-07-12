#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(vector<ll> &a, ll find){
    ll lo = 0;
    ll hi = a.size() - 1;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2; 

        if(a[mid] == find){
            return mid;
        }
        else if(a[mid] < find){
            lo = mid + 1;
        }
        else if(a[mid] > find){
            hi = mid - 1;
        }
    }
    return -1;
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
        int x;
        cin >> x;
        
        ll rest = solve(v, x);

        if(rest != -1){
            cout << rest + 1 << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}
