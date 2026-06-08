#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 5 == 0){
            sum ++;
        }
    }
    if(n % 5 != 0){
        cout << sum+1 << "\n";
    }
    else{
        cout << sum << "\n";
    }
}
