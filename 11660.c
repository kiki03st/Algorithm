#include <stdio.h>
#include <stdlib.h>

int main(){
	long long int n, m, sum, x1, y1, x2, y2;
	long long int result[1025] = {0};
	scanf("%lld %lld", &n, &m);
	long long int** arr = (long long int**)malloc(sizeof(long long int*) * (n + 1));
	for(long long int i = 0; i < n + 1; i++) arr[i] = (long long int*)malloc(sizeof(long long int) * (n + 1));
	for(long long int i = 1; i <= n; i++){
		for(long long int j = 1; j <= n; j++){
			scanf("%lld", &arr[i][j]);
		}
	}
	for(long long int i = 0; i < m; i++){
		scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
		for(long long int j = x1; j <= x2; j++){
			for(long long int k = y1; k <= y2; k++){
				result[i]+=arr[k][j];
			}
		}
	}
	for(long long int i = 0; i < m; i++) printf("%lld\n", result[i]);
	for(long long int i = 0; i < n + 1; i++) free(arr[i]);
	free(arr);
	return 0;
}
