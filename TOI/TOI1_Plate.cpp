#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<int, int> k;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        k[b] = a;
    }

    queue<int> q[13]; queue<int> all;
    char c;

    while(cin >> c){
        if(c == 'X'){
            break;
        }

        if(c == 'E'){
            int id;
            cin >> id;
            int idnull = k[id];

            if(q[idnull].empty()){
                all.push(idnull);
            }
            q[idnull].push(id);
        }

        if(c == 'D'){
            if(all.empty()){
                cout << "empty" << "\n";
            }

            else{
                int d = all.front();
                cout << q[d].front() << "\n";
                q[d].pop();

                if(q[d].empty()){
                    all.pop();
                }
            }
        }
    }
    cout << 0 << "\n";
}
