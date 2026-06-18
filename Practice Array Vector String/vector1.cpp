#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        if(b % 2 == 0){
            a.push_back(b);
        }
    }
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << "\n";

    for(int i = a.size() - 1; i >= 0; i--){
        cout << a[i] << ' ';
    }
    cout << "\n";
}

/*6
1 4 7 8 10 15*/
