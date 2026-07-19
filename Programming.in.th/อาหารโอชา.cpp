#include <bits/stdc++.h>
using namespace std;

int a[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<int> b;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        b.insert(x);
    }

    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }

    do{
        if(b.count(a[0]) == 0){
            for(int i = 0; i < n; i++){
                cout << a[i] << ' ';
            }
            cout << "\n";
        }
    }
    while(next_permutation(a, a + n));
}
