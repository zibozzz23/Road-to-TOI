#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = a[0];             
    for(int i = 1; i < n; i++){
        result = __gcd(ans, a[i]);  
    }

    cout << result << "\n";
}
