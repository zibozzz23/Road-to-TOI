#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    int lw = 0; int up = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 65 && a[i] <= 90){
            up ++;
        }
        else if(a[i] >= 97 && a[i] <= 122){
            lw ++;
        }
    }

    if(up > lw){
        for(int j = 0; j < a.size(); j++){
            a[j] = toupper(a[j]);
        }
    }

    if(lw > up){
        for(int k = 0; k < a.size(); k++){
            a[k] = tolower(a[k]);
        }
    }

    if(up == lw){
        for(int l = 0; l < a.size(); l++){
            a[l] = tolower(a[l]);
        }
    }

    cout << a << "\n";
}
