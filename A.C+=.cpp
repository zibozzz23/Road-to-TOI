#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    long long a, b, n;
    cin >> a >> b >> n;

    if(a > b){
        swap(a, b);
    }

    int res = 0;
    while(a <= n && b <= n){
        a = a + b;
        swap(a, b);
        res ++;
    }
    cout << res << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
