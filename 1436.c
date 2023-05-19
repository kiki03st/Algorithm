#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n, num = 666, spare, count = 0, tf;
	scanf("%d", &n);
	while(n != 0){
		spare = num;
		tf = 0;
		count = 0;
		while(spare != 0){
			if(spare % 10 == 6) count+=1;
			else count = 0;
			if(count == 3){
				tf = 1;
				break;
			}
			spare /= 10;
		}
		if(tf) n-=1;
		num+=1;
	}
	printf("%d", num - 1);
	return 0;
}
