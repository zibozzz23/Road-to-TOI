#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<ll> cost(n+1, 0); vector<ll> point(n+1, 0);
    for(int i = 1; i <= n; i++){
        ll a;
        cin >> a;

        cost[i] = cost[i-1];
        point[i] = point[i-1];

        if(a >= 0){
            point[i] += a;
        }
        else{
            cost[i] += -a;
        }
    }

    while(m--){
        ll x, h;
        cin >> x >> h;
        x ++;

        ll lo = x; 
        ll hi = n + 1;
        ll find = cost[x-1] + h;

        while(lo < hi){
            ll mid = lo + (hi - lo) / 2;

            if(mid <= n && cost[mid] >= find){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
        }

        if(lo == n + 1){
            cout << point[n] - point[x-1] << "\n";
        }
        else{
            cout << point[lo - 1] - point[x - 1] << "\n";
        }
    }
}
