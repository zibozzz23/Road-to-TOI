#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    list<int> a;
    for(int i = 1; i <= n; i++){
        a.push_back(i);
    }
    auto ans = a.begin();
    
    while(a.size() > 0){
        for(int i = 0; i < m-1; i++){
            ans ++;
                if(ans == a.end()){
                ans = a.begin();
                }   
            }
    cout << *ans << ' ';
    ans = a.erase(ans);
        if(ans == a.end()){
        ans = a.begin();
        }
    }
}
    
// ได้ 50/100 ติด MLE เดี๋ยวมาแก้   
/*
8 4
5 4
*/
