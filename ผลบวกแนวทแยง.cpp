#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[105][105];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][i];
    }
    cout << sum << "\n";
}

/*3
1 2 3
4 5 6
7 8 9*/

