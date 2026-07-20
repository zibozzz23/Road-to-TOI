#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    
    return solve(n-1) + solve(n-2) + solve(n-3);
}

int main(){
    int a;
    cin >> a;
    cout << solve(a) << "\n";
}
