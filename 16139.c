#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	char arr[2001];
	char alpha;
	int sum[2001];
	int result[2001];
	int n, a, b, len;
	scanf("%s", arr);
	len = strlen(arr);
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++){
		scanf("%c %d %d", &alpha, &a, &b);
		for(int j = 0; j < len; j++){
			if(j == 0 && arr[0] == alpha) sum[0] = 1;
			else sum[0] = 0;
			if(arr[j] == alpha) sum[j] = sum[j - 1] + 1;
			else sum[j] = sum[j - 1];
		}
		if(a == 0) result[i] = sum[b];
		else result[i] = sum[b] - sum[a - 1];
		getchar();
	}
	for(int i = 0; i < n; i++) printf("%d\n", result[i]);
	return 0;
}
