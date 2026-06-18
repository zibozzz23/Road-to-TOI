#include <iostream>
using namespace std;

int main(){
	int n, first;
	cin >> n >> first;
	
	int min = first; int max = first;
	
	for(int i = 2; i <= n; i++){
		int j; cin >> j;
		
		if(j < min){
			min = j;
		}
		
		if(j > max){
			max = j;
		}
	}
	
	cout << min << "\n" << max << "\n";
}
