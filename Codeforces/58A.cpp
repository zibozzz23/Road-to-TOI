#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin, a);

    string find = "hello";
    int p = 0;

    for(char c : a){
        if(c == find[p]){
            p ++;
        }

        if(p == 5){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}
