#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	int sum;
	int arr[100001] = {0, };
	for(int i = 2; i <= sqrt(100000); i++){
		if(!arr[i]){
			for(int j = 2; i * j <= 100000; j++){
				arr[i * j] = -1;
			}
		}
	}
	while(true){
		cin >> n;
		sum = 0;
		if(n == -1) break;
		for(int i = 1; i < n; i++){
			if(n % i == 0){
				sum += i;
			}
		}
		if(sum == n){
			cout << n << " = 1";
			for(int i = 2; i < n; i++){
				if(n % i == 0){
					cout << " + " << i;
				}
			}
			cout << endl;
		}
		else{
			cout << n << " is NOT perfect." << endl;
		}
	}
	return 0;
}
