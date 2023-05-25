#include <stdio.h>
int main(){
        int n, m;
        long long int k, sum = 0;
        scanf("%d %d", &n, &m);
        long long int result[100001];
	for(int i = 0; i < n; i++){
                scanf("%lld", &k);
                sum += k;
                result[sum % m] += 1;
        }
        long long int num = result[0];
        for(int i = 0; i < m; i++) num+=(long long int)(result[i] * (result[i] - 1) / 2);
        printf("%lld\n", num);
        return 0;
}
