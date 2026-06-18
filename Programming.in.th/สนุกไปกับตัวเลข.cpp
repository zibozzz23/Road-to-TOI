#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            swap(a[0], a[i]);
            break;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << "\n";
}
