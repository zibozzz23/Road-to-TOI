#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, m, a;
    cin >> n >> m >> a;

    ll b = 0; ll c = 0;
    b = (n + a - 1) / a;
    c = (m + a - 1) / a;
    
    cout << b * c << "\n";
}
