#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[42] = {0};
	int sum = 0;
	
	for(int i = 1; i <= 10; i++){
		int n;
		cin >> n;
		int sum = n % 42;
		
		a[sum] = 1;
	}
	
	for(int i = 0; i < 42; i++){
		if(a[i] == 1){
			sum ++;
		}
	}
	cout << sum << "\n";
}
