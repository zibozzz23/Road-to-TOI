#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[105] = {0};
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
        v.push_back(x);
    }

    bool res = false;
    for(int i = 0; i <= 100; i++){
        if(a[i] == 1){
            cout << i << " ";
            res = true;
        }
    }
    cout << "\n";
}
/*
8
1 2 3 4 5 1 2 3*/
