#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fib(ll n){
    if(n <= 1){
        return n;
    }
    ll f2 = 0, f1 = 1;
    ll now = 0;

    for(ll i = 2; i <= n; i++){
        now = f2 + f1;
        f2 = f1;
        f1 = now;
    }
    return now;
}

int main(){
    ll a;
    cin >> a;
    cout << fib(a) << "\n";
}
