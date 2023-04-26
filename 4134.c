#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int solution(long int k){
	int tf;
	if(k == 2 || k == 3) return k;
	else if(k == 1) return 2;
	else if(k == 4) return 5;
	while(1){
		tf = 1;
		for(long long int i = 2; i <= sqrt(k); i++){
			if(k % i == 0){
				tf = 0;
				break;
			}
		}
		if(tf == 1) return k;
		k++;
	}
}
int main(){
	int n;
	long long int m;
	scanf("%d", &n);
	long long int* arr = (long long int*)malloc(sizeof(long long int) * n);
	for(int i = 0; i < n; i++){
		scanf("%lld", &m);
		arr[i] = solution(m);
	}
	for(int i = 0; i < n; i++) printf("%lld\n", arr[i]);
	free(arr);
	return 0;
}
