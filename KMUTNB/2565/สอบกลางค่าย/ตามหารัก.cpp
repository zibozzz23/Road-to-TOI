#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    
    int ans = 0;
    int time = 0;
        for(int j = 0; j < a.size(); j++){
            a[j] = tolower(a[j]);
        }

    for(int i = 0; i < a.size();){
        if((i+4) <= a.size() && a[i] == 'l' && a[i+1] == 'o' && a[i+2] == 'v' && a[i+3] == 'e'){
            time = 1;
            break;
        }
        else{
            i ++;
            ans ++;
        }
    }   
    if(time == 1){
        cout << ans << "\n";
    }
    else if(time == 0){
        cout << "SINGLE" << "\n";
    }
}
    
