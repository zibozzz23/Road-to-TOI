#include <bits/stdc++.h>
using namespace std;

int b(int *a){
    a ++;
}

int main(){
    int y[5];
    int *ptr = y;

    for(int i = 0; i < 5; i++){
        cin >> *(ptr+i);
        cout << *(ptr+i) << ' ';
    }
    cout << "\n";

   for(int i = 4; i >= 0; i--){
        cout << *(ptr+i) << ' ';
   }
   cout << "\n";

}

/*
1 2 3 4 5
12 99 8 1 56*/
