#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[200005];
ll pre[200005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    pre[0] = 0;
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i];
    }

    while(q--){
        ll st, end;
        cin >> st >> end;

        ll ans = pre[end] - pre[st - 1];
        cout << ans << "\n";
    }
}
