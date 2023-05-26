#include <stdio.h>
#include <stdlib.h>

unsigned long long int solution(int r, int n){
	unsigned long long int sum = 1, k = 1;
	for(int i = n; i > n - r; i--) sum*= i;
	for(int i = r; i > 0; i--) k *= i;
	sum = sum / k;
	return sum;
}
int main(){
	unsigned long long int n;
	scanf("%lld", &n);
	unsigned long long int* arr = (unsigned long long int*)malloc(sizeof(unsigned long long int) * n);
	int a, b;
	for(unsigned long long int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		arr[i] = solution(a, b);
	}
	for(int i = 0; i < n; i++) printf("%lld\n", arr[i]);
	free(arr);
	return 0;
}
