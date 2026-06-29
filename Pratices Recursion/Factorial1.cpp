#include <iostream>
using namespace std;

#define int long long

int fac(int a){
    if(a <= 1){
        return 1;
    }
    return a*fac(a-1);
}

signed main(){
    int x;
    cin >> x;
    cout << fac(x) << "\n";
}
