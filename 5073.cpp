#include <iostream>

using namespace std;

bool solution(int a, int b, int c){
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	int i = a + b + c - max;
	if(max < i) return true;
	else return false;
}

int main(){
	int a, b, c;
	while(true){
		cin >> a;
		cin >> b;
		cin >> c;
		if(!a and !b and !c) return 0;
		
		if(!solution(a, b, c)){
			cout << "Invalid" << endl;
		}
		else if(a == b and b == c){
			cout << "Equilateral" << endl;
		}
		else if(a == b or b == c or c == a){
			cout << "Isosceles" << endl;
		}
		else{
			cout << "Scalene" << endl;
		}
	}
	return 0;
}
