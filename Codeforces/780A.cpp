#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;        
    int ans = 0;

    for(int i = 0; i < n*2; i++){
        int x;
        cin >> x;

        if(s.count(x)){
            s.erase(x);
        } 
        else{  
            s.insert(x);
        }

        ans = max(ans, (int)s.size());
    }
    cout << ans << "\n";
}
