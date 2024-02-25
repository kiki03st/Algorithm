#include <iostream>
#include <string>

using namespace std;

int find(string *arr, int len, string n){
	for(int i = 0; i < len; i++){
		if(arr[i] == n){
			return i + 1;
		}
	}
	return -1;
}

int main(){
	int a, b;
	
	cin >> a;
	cin >> b;

	string *arr = new string[a];
	for(int i = 0; i < a; i++){
		cin >> arr[i];
	}

	string line;

	for(int i = 0; i < b; i++){
		cin >> line;
		if(line[0] >= '1' and line[0] <= '9'){
			cout << arr[stoi(line) - 1] << endl;
		}
		else{
			cout << find(arr, a, line) << endl;
		}
	}

	return 0;
}
