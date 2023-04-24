#include <stdio.h>
int main(){
	long long int a, b, min;
	scanf("%lld %lld", &a, &b);
	if(a == b){
		printf("%lld\n", a);
		return 0;
	}
	if(a > b) min = b;
	else min = a;
	for(int i = min; i > 0; i--){
		if(a % i == 0 && b % i == 0){
			printf("%lld\n", a * b / i);
			return 0;
		}
	}
}
