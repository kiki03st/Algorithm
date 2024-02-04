#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    cin >> line;
    int n;
    int arr[10] = {0, };
    for(int i = 0; i < line.length(); i++){
        n = line[i] - '0';
        arr[n]++;
    }
    for(int i = 9; i >= 0; i--){
        for(int j = 0; j < arr[i]; j++){
            cout << i;
        }
    }
	cout << endl;
    return 0;
}
