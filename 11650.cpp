#include <iostream>

using namespace std;

struct tuple{
	int x, y;
};

int main(){
	int n;
	cin >> n;
	tuple *arr = new tuple[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i] -> x;
		cin >> arr[i] -> y;

	return 0;
}
