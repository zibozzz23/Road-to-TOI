#include <bits/stdc++.h>
using namespace std;

int main(){
    char a, b;
    char c;
    int n;
    cin >> a >> b >> c;

    int sum = 0; int ty = 0; int tp = 0;

    if(a == 'S'){
        sum = 60;
    }
    else if(a == 'M'){
        sum = 80;
    }
    else if(a == 'L'){
        sum = 100;
    }
    
    if(b == 'T'){
        ty = 20;
    }
    else if(b == 'R'){
        ty = 0;
    }
    
    if(c == 'P'){
        cin >> n;
        tp = 15 * n;
    }
    else if(c == 'E'){
        cin >> n;
        tp = 10 * n;
    }
    else if(c == 'N'){
        tp = 0;
    }

    cout << sum + ty + tp << "\n";
}
