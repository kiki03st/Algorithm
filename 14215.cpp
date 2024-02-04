#include <iostream>

using namespace std;

int solution(int a, int b, int c){
	int max = a;
	
	if(b > max) max = b;
	if(c > max) max = c;
	
	if(max < a + b + c - max){
		return a + b + c;
	}
	else{
		return 2 * (a + b + c - max) - 1;
	}
}

int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << solution(a, b, c) << endl;
	return 0;
}
