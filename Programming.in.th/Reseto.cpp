#include <bits/stdc++.h>
using namespace std;

bool y[1005] = {false};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    int a = 0; int ans = 0;

    while(a != -1){
        a = -1;
        for(int i = 2; i <= n; i++){
            if(y[i] == false){
                a = i;
                break;
            }
        }

        if(a == -1){
            break;
        }

        for(int i = 2; i <= n; i++){
            if(i % a == 0 && y[i] == false){
                y[i] = true; 
                ans ++;

                if(ans == k){
                    cout << i << "\n";
                    exit(0);
                }
            } 
        }
    }
}
