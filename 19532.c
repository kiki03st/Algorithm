#include <stdio.h>
int main(){
	int a, b, c, d, e, f, x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	if(a == 0){
		y = c / b;
		x = (- e * y + f) / d;
	}
	else if(b == 0){
		x = c / a;
		y = (-d * x + f) / e;
	}
	else if(d == 0){
		y = f / e;
		x = (-b * y + c) / a;
	}
	else if(e == 0){
		x = f / d;
		y = (-a * x + c) / b;
	}
	else if(a == d){
		y = (c -f) / (b - e);
		x = (-b * y + c) / a;
	}
	else if(b == e){
		x = (c - f) / (a - d);
		y = (-a * x + c) / b;
	}
	else{
		y = (c * d - f * a) / (b * d - e * a);
		x = (-b * y + c) / a;
	}
	printf("%d %d\n", x, y);
	return 0;
}
