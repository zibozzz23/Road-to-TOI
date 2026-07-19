#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b, int c){
    if(n == 0){
        return;
    }
    
    solve(n-1, a, c, b);
    cout << a << ' ' << b << "\n";
    solve(n-1, c, b, a);

}

int main(){
    int q;
    cin >> q;
    cout << (1 << q) - 1 << "\n";
    solve(q, 1, 3, 2);
}
