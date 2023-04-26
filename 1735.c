#include <stdio.h>
int main(){
	int min, a_1, b_1, a_2, b_2, x, y;
	scanf("%d %d %d %d", &a_1, &b_1, &a_2, &b_2);
	y = a_1 * b_2 + a_2 * b_1;
	x = b_1 * b_2;
	if(x == y){
		printf("1 1\n");
		return 0;
	}
	else if(x > y) min = y;
	else min = x;
	for(int i = min; i > 0; i--){
		if(x % i == 0 && y % i == 0){
			printf("%d %d\n", y / i, x / i);
			return 0;
		}
	}
}
