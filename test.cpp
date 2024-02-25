#include <iostream>

using namespace std;

unsigned long long int pow(int n){
	int sum = 1;
	for(int i = 0; i < n; i++){
		sum *= 10;
	}
	return sum;
}

int main(){
	char n = 'z';
	unsigned long long int sum = 0;
	for(int i = 0; i < 50; i++){
		sum += (int)n * pow(i);
	}
	cout << sum << endl;
	return 0;
}
