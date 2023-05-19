#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	unsigned int* arr = (unsigned int*)malloc(sizeof(int) * n);
	//unsigned int* sum = (unsigned int*)malloc(sizeof(int) * (n + 1));
	//sum[0] = 0;
	int* result = (int*)malloc(sizeof(int) * m);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
		result[sum % m] += 1;
		//sum[i + 1] = sum[i] + arr[i];
		//result[sum[i + 1] % m] +=1;
	}
	int num = result[0];
	for(int i = 0; i < m; i++) num+=result[i] * (result[i] - 1) / 2;
	printf("%d\n", num);
	free(arr);
	//free(sum);
	free(result);
	return 0;
}
