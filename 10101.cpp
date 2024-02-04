#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a + b + c != 180){
		cout << "Error" << endl;
	}
	else{
		if(a == 60 and b == 60 and c == 60){
			cout << "Equilateral" << endl;
		}
		else if(a == b || b == c || c == a){
			cout << "Isosceles" << endl;
		}
		else{
			cout << "Scalene" << endl;
		}
	}
	return 0;
}
