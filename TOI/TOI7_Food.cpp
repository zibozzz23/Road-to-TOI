#include <bits/stdc++.h>
using namespace std;

int ar[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<int> a;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    for(int i = 0; i < n; i++){
        ar[i] = i + 1;
    }

    do{
        if(a.count(ar[0]) == 0){
            for(int i = 0; i < n; i++){
                cout << ar[i] << ' ';
            }
            cout << "\n";
        }    
    } 
    while(next_permutation(ar, ar + n));
}
