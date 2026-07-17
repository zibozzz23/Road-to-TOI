#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while(q--){
        string a;
        cin >> a;

        bool ft = true;
        stack<char> s;

        for(ll i = 0; i < a.size(); i++){
            char c = a[i];
            if(c == '(' || c == '[' || c == '{'){
                s.push(c);
            }

            else{
                if(!s.empty()){
                    if((c == ')' && s.top() == '(') || (c == ']' && s.top() == '[') || (c == '}' && s.top() == '{')){
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
            cout << "yes" << "\n";
        }

        else{
            cout << "no" << "\n";
        }
    }
}
