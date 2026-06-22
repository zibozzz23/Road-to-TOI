#include <bits/stdc++.h>
using namespace std;

void solve(int *p){
    *p = *p * 2;
}

int main(){
    int n = 5; int m = 7;
    solve(&n);
    solve(&m);
    cout << n << ' ' << m << "\n";
}
