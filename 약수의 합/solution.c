#include <stdio.h>
int main() {
	int n, sum=0;
	scanf("%d",&n);
	for(int i = 1; i <= n/2; i++){
		if(n%i==0) sum+=i;
	}
	sum += n;
	printf("%d", sum);
	return 0;
}
