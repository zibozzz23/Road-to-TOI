#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        if(a[i] == a[i-1]){
            continue;
        }
        cout << a[i] << ' ';
    }
    cout << "\n";
}
