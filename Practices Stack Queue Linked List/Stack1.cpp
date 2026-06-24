#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }

    while(!a.empty()){
        cout << a.top() << ' ';
        a.pop();
    }
    cout << "\n";
}
