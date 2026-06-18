include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    int pos = 1;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'A'){
            if(pos == 1){
                pos = 2;
            }
            else if(pos == 2){
                pos = 1;
            }
        } 

        else if(a[i] == 'B'){
            if(pos == 2){
                pos = 3;
            }
            else if(pos == 3){
                pos = 2;
            }
        }

        else if(a[i] == 'C'){
            if(pos == 1){
                pos = 3;
            }
            else if(pos == 3){
                pos = 1;
            }
        } 
    }
    cout << pos << "\n";
