#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    map<int, int> m;
    for(int i = 0; i < b; i++){
        int s, c;
        cin >> s >> c;
        m[c] = s;
    }

    queue<int> stu[12]; queue<int> all;
    char v;

    while(cin >> v){
        if(v == 'X'){
            break;
        }

        if(v == 'E'){
            int id;
            cin >> id;
            int cls = m[id];
            
            if(stu[cls].empty()){
                all.push(cls);
            }
            stu[cls].push(id);
        }
        

        if(v == 'D'){
            if(all.empty()){
                cout << "empty" << "\n";
            }

            else{
                int cls = all.front();
                cout << stu[cls].front() << "\n";
                stu[cls].pop();

                if(stu[cls].empty()){
                    all.pop();
                }
            }
        }
    }
    cout << 0 << "\n";
}
