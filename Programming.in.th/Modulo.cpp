#include <bits/stdc++.h>
using namespace std;

int main(){
	int hey[42] = {0};
	int count = 0;
	
	for(int i = 1; i <= 10; i++){
		int a;
		cin >> a;
		int total = a % 42;
		
		hey[total] = 1;
	}
	
	for(int i = 0; i < 42; i++){
		if(hey[i] == 1){
			count ++;
		}
	}
	
	cout << count;
	
	return 0;
}
