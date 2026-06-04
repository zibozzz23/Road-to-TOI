#include <iostream>
#include <string>
using namespace std;

int n[9];

int main(){
    string a;
    cin >> a;

    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 'A' && a[i] <= 'H'){
            n[a[i] - 'A']++;
        }
    }

    for(int i = 0; i < 8; i++){
        cout << n[i] << ' ';
    }
    cout << "\n";
}
