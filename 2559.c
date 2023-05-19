#include <stdio.h>
int main(){
	int n, m, max;
	scanf("%d %d", &n, &m);
	int arr[100001] = {0};
	int sum[100001] = {0};
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(int i = 0; i < m; i++) sum[0]+=arr[i];
	max = sum[0];
	for(int i = 0; i < n - m; i++){
		sum[i + 1] = sum[i] + arr[i + m] - arr[i];
		if(sum[i + 1] > max) max = sum[i + 1];
	}
	printf("%d\n", max);
	return 0;
}
