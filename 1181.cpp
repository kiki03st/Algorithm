#include <iostream>
#include <string>

using namespace std;


int main(){
    int n;
    cin >> n;
    string *arr = new string[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool tf;
    for(int i = n - 2; i >= 0; i--){
        tf = true;
        for(int j = 0; j <= i; j++){
            if(arr[j][0] > arr[j + 1][0]){
                string tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                tf = false;
            }
        }
        if(tf){
			break;
		}
    }
    for(int i = n - 2; i >= 0; i--){
        tf = true;
        for(int j = 0; j <= i; j++){
            if(arr[j].length() > arr[j + 1].length()){
                string tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                tf = false;
            }
        }
        if(tf){
			break;
		}
    }
	int idx;
	for(int i = 0; i < n; i++){
		idx = i + 1;
		while(idx < n){
			if(!arr[i].compare(arr[idx])){
				for(int j = idx; j < n - 1; j++){
					arr[j] = arr[j + 1];
				}
				n--;
			}
			else break;
			idx++;
		}
	}
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}
