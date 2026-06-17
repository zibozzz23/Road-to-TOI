#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int a;
    cin >> a;
    
    vector<int> v(a);
    for(int i = 0; i < a; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0){
            v[1] = 0;
            cout << v[i];
            v[i] ++;
        }
        if(v[i] != 0){
            if(v[i] < v[i+1] && v[i] != 0 || v[i] == v[i]){
                cout << v[i];
            }
        } 
    }
    cout << "\n";
}

// bug

/*
6
3 0 8 1 3 3
*/
