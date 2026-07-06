#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        string a;
        cin >> a;

        for(int j = 0; j < a.size(); j++){
            a[j] = tolower(a[j]);
        }

        if(a == "yes"){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}
