// 1 Time Complexity O(N)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 5 == 0){
            sum ++;
        }
    }
    if(n % 5 != 0){
        cout << sum+1 << "\n";
    }
    else{
        cout << sum << "\n";
    }
}

// 2 Time Complexity O(1)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 5 == 0){
        cout << n / 5 << "\n";
    }
    else{ 
        cout << (n / 5) + 1 << "\n";
    }
}
