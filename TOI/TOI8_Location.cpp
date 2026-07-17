#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a[1005][1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }

    ll ans = 0;
    for(int i = k; i < n + 1; i++){
        for(int j = k; j < m + 1; j++){
            ll sum = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
            ans = max(ans, sum);
        }
    }
    cout << ans << "\n";
}
