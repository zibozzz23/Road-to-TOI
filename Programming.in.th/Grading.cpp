#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

int total = a + b + c;

if(total >= 80){
    cout << "A";
}

else if(total >= 75){
    cout << "B+";
}

else if(total >= 70){
    cout << "B";
}

else if(total >= 65){
    cout << "C+";
}

else if(total >= 60){
    cout << "C";
}

else if(total >= 55){
    cout << "D+";
}

else if(total >= 50){
    cout << "D";
}

else{
    cout << "F";
}
}
