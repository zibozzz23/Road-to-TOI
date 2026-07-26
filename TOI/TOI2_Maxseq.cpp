#include <bits/stdc++.h>
using namespace std;

int pre[2505];
int a[2505];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    pre[0] = 0;
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i];
    }

    int max = 0; int ans = 0; int in = 0; int jn = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            ans = pre[j] - pre[i-1];

            if(ans > max){
                max = ans;
                in = i;
                jn = j;
            }
        }
    }

    if(max <= 0){
        cout << "Empty sequence" << "\n";
    }

    else{
        for(int i = in; i <= jn; i++){
            cout << a[i] << ' ';
        }
        cout << "\n";
        cout << max << "\n";
    }
}
