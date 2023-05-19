#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, a, b;
	scanf("%d", &n);
	int** arr = (int**)malloc(sizeof(int*) * n);
	for(int i = 0; i < n; i++){
		arr[i] = (int)malloc(sizeof(int) * 2);
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	return 0;
}
