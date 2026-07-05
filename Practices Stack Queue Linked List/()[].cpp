#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    bool ft = true;
    stack<char> s;
    for(int i = 0; i < a.size(); i++){
        char c = a[i];

        if(c == '(' || c == '[' || c == '{'){
            s.push(c);
        }

        else{
            if(!s.empty()){
                if(c == ')' && s.top() == '(' || c == ']' && s.top() == '[' || c == '}' && s.top() == '{'){
                    s.pop();
                }
                else{
                   ft = false;
                }
            }
            else{
                ft = false;
            }
        }
    }

    if(ft == true && s.empty()){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
