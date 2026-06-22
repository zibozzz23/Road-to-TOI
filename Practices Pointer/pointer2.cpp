#include <bits/stdc++.h>
using namespace std;

void solve(int *a, int *b){
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp; 
    }
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    solve(&n, &m);
    cout << n << ' ' << m << "\n";
}
