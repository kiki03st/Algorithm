#include <stdio.h>

void backtracking(int arr[], int len, int n, int end){
	if(n == end){
		printf("\nclear");
		return;
	}
	else{
		for(int i = 1; i <= len; i++){
			if(arr[i] == 0){
				printf("%d ", i);
				arr[i] = 1;
				backtracking(arr, len, n + 1, end);
				arr[i] = 0;
			}
		}
	}
}
int main(){
	int n, m;
	int arr[9] = {0};
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) arr[i] = 1;
	backtracking(arr, n, 0, m);
	return 0;
}
