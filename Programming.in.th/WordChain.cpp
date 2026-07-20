```cpp
#include <bits/stdc++.h>
using namespace std;

string a[30005];

int solve(string n, string m){
    int rest = 0;

    for(int j = 0; j < n.size(); j++){
        if(n[j] != m[j]){
            rest ++;
        }
    }
    return rest;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, c;
    cin >> b >> c;

    for(int i = 0; i < c; i++){
        cin >> a[i];
    }

    for(int i = 0; i < c-1; i++){
        if(solve(a[i], a[i+1]) > 2){
            cout << a[i];
            return 0;
        }
    }
    cout << a[c-1] << "\n";
}
```
