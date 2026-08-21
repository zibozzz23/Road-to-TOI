#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dbg(X) cerr << #x << " = " << x << "\n"

vector<ll> adj[100005];
bool visit[100005]; 

void dfs(ll node){
    visit[node] = true;
    for(ll j : adj[node]){

        if(visit[j] == false){
            dfs(j);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    for(ll i = 0; i < m; ++i){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    ll ans = 0;
    for(ll i = 1; i <= n; ++i){
        if(visit[i] == false){
            ++ ans;
            dfs(i);
        }
    }
    cout << ans << "\n";
}
