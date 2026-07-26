#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    queue<int> q;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    while(!q.empty()){
        for(int i = 1; i <= m-1; i++){
            int rest = q.front();
            q.pop();
            q.push(rest);
        }
        cout << q.front() << ' ';
        q.pop();
    }
}

// 50/100 ใข้ Linked List โดน MLE, แก้เป็น Queue ได้ 100/100
/*
8 4
5 4
*/
