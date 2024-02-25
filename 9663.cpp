#include <iostream>

using namespace std;

int **chess;

int sum = 0;

bool check(int n, int col, int row){
	for(int i = 0; i < n; i++){
		if(chess[i][row]) return false;
		if(chess[col][i]) return false;
	}
	int col_s, row_s;
	if(col < row){
		col_s = col - col;
		row_s = row - col;
	}
	else{
		col_s = col - row;
		row_s = row - row;
	}
	for(int i = col_s, j = row_s; i < n and j < n; i++, j++){
		if(chess[i][j]) return false;
	}
	if(col < n - 1 - row){
		col_s = col - col;
		row_s = row + col;
	}
	else{
		col_s = col - (n - 1 - row);
		row_s = row + (n - 1 - row);
	}
	for(int i = col_s, j = row_s; i < n and j >= 0; i++, j--){
		if(chess[i][j]) return false;
	}
	return true;
}
void n_queen(int n, int col, int row, int cnt){
	if(cnt == n){
		sum++;
		return;
	}
	for(int i = col; i < n; i++){
		for(int j = row; j < n; j++){
			if(!chess[i][j]){
				if(check(n, i, j)){
					chess[i][j] = 1;
					n_queen(n, i, j, cnt+1);
					chess[i][j] = 0;
				}
			}
		}
		row = 0;
	}
	return;
}


int main(){
	int n;
	cin >> n;
	chess = new int*[n];
	for(int i = 0; i < n; i++) chess[i] = new int[n]{0, };
	n_queen(n, 0, 0, 0);
	cout << sum << endl;
	return 0;
}
