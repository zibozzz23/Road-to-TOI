#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[9];

    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    int x = sum - 100;
    int sum1 = -1; int sum2 = -1;

    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(a[i] + a[j] == x){
                sum1 = i; 
                sum2 = j;
            }
        }
    }

    for(int k = 0; k < 9; k++){
        if(k != sum1 && k != sum2){
            cout << a[k] << "\n";
        }
    }
}
