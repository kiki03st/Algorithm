#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, m, x, y;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* result = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) result[i] = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		x = m / 2;
		int* er = (int*)malloc(sizeof(int) * (m + 1));
		for(int j = 0; j <= m; j++){
			if(j == 0 || j == 1) er[j] = -1;
			else er[j] = j;
		}
		for(int j = 2; j < m; j++){
			if(er[j] == -1) continue;
			for(int k = j + 1; k <= m; k++){
				if(er[k] % er[j] == 0) er[k] = -1;
			}
		}
		for(int j = 2; j < m / 2; j++){
			if(er[j] != -1 && er[m - j] != -1){
				result[i]+=1;
			}
		}
/*
		for(int j = 2; j <= m; j++){
			if(er[j] != -1) printf("%d ", er[j]);
		}
		printf("\n");
*/
		if(er[x] != -1) result[i]+=1;
		free(er);
	}
	for(int i = 0; i < n; i++) printf("%d\n", result[i]);
	free(arr);
	free(result);
	return 0;
}
