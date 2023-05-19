#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int factorial(int n){
	sum = 1;
	for(int i = n; i > 1; i--) sum*=i;
	return sum;
}
int main(){
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0; i <=  n / 2; i++){
		if(n == 0){
			sum+=1;
			continue;
		}
		for(int j = 1; j <= i; j++){
			sum+=(factorial(n - i) / (factorial(n - i - j) * factorial(j)));
		}
	}
	printf("%d\n", sum);
	return 0;
}
