#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(ll n){
    if(n <= 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(ll i = 5; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;
    
    while(a--){
        ll x;
        cin >> x;
        ll ans = round(sqrt(x));
        cout << (ans * ans == x && prime(ans)? "YES" : "NO") << "\n";
    }
}
