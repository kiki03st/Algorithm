#include <iostream>

using namespace std;

int main(){
    unsigned long long int sum = 0;
    int n;
	cin >> n;
    for(int i = 3; i <= n; i++){
        sum += (i - 1) * (i - 2) / 2;
    }
    cout << sum << endl;
    cout << 3 << endl;
    return 0;
}
