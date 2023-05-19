#include <stdio.h>
int main(){
	int n, m, a, b;
	int arr[100001];
	int sum[100001] = {0};
	int result[100001];
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(int i = 0; i < n; i++) sum[i + 1] = sum[i] + arr[i];
	for(int i = 0; i < m; i++){
		scanf("%d %d", &a, &b);
		result[i] = sum[b] - sum[a-1];
	}
	for(int i = 0; i < m; i++) printf("%d\n", result[i]);
	return 0;
}
