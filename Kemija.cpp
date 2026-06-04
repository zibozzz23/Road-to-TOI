#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	
	for(int i = 0; i < a.size();){
		if((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && a[i+1] == 'p'
		&& a[i+2] == a[i]){
			cout << a[i];
			i +=3;
		}
		else{
			cout << a[i];
			i ++;
		}
	}
	cout << ' ' << "\n";
}
