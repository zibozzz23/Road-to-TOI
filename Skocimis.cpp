#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(b-a > c-b){
        cout << b-a-1 << "\n";
    }
    else if(c-b > a-b){
        cout << c-b-1 << "\n";
    }
}
