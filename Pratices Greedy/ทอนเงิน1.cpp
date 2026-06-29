#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    ans += n / 25;
    n %= 25;

    ans += n / 10;
    n %= 10;

    ans += n / 5;
    n %= 5;

    ans += n / 1;
    n %= 1;

    cout << ans << "\n";
}
