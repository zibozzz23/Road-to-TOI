#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        int count; string a;
        cin >> count >> a;
        
        bool y[26] = {false};

        int sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum ++;
            int keep = a[i] - 'A';

            if(y[keep] == false){
                sum ++;
                y[keep] = true;
            }
        }
        cout << sum << "\n";
    }
}
