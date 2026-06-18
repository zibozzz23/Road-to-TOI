#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    cin >> a;
    
    int sum = a[a.length()-1] - '0';
    
    if(sum % 2 != 0 || a == "2"){
        cout << "T" << "\n";
    }
    else{
        cout << "F" << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    
    while(n--){
        solve();
    }
}
