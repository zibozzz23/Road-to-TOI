#include <iostream>
#include <string> 
using namespace std;

int main(){
    string a;
    cin >> a;

    int lw = 0; int up = 0;
    for(int i = 0; i < a.length();){
        if(a[i] >= 65 && a[i] <= 90){
            up ++;
            i ++;
        }
        else if(a[i] >= 97 && a[i] <= 122){
            lw ++;
            i ++;
        }
    }
    if(up == 0){
        cout << "All Small Letter" << "\n";
    }
    else if(lw == 0){
        cout << "All Capital Letter" << "\n";
    }
    else{
        cout << "Mix" << "\n";
    }
}