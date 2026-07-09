#include <bits/stdc++.h>
using namespace std;

char a[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int d = 0; int b = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 'D'){
            d ++;
        }
        else if(a[i] == 'A'){
            b ++;
        }
    }

    if(b > d){
        cout << "Anton" << "\n";
    }
    else if(d > b){
        cout << "Danik" << "\n";
    }
    else if(d == b){
        cout << "Friendship" << "\n";
    }
}
