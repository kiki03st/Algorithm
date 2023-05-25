#include <stdio.h>

int main(){
	int n, m, count = 0;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++){
		if(n % i == 0) count++;
		if(count == m){
			printf("%d\n", i);
			return 0;
		}
	}
	if(count < m) printf("0\n");
	return 0;
}
