#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int find){
    int lo = 0; int hi = a.size() - 1;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;

        if(a[mid] == find){
            return mid;
        }
        else if(a[mid] < find){
            lo = mid + 1;
        }
        else if(a[mid] > find){
            hi = mid - 1;
        }
    }
    return - 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while(q--){
        int x;
        cin >> x;
        cout << solve(v, x) << "\n";
    }
}
