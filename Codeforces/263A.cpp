#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int n;
    
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= 5; j++){
                cin >> n;
                if(n == 1){
                a = i;
                b = j;
            }
        }
    }
    
    int ans = abs(a - 3) + abs(b - 3);
    cout << ans << "\n";
}
