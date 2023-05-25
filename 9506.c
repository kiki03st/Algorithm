#include <stdio.h>

int main(){
	int n, sum;
	while(1){
		sum = 0;
		scanf("%d", &n);
		if(n == -1) return 0;
		for(int i = 1; i < n; i++){
			if(n % i == 0) sum+=i;
		}
		printf("%d\n", sum);
	}
}
