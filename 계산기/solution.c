#include <stdio.h>
int main() {
	int a, b;
	char d;
	scanf("%d %c %d", &a,&d,&b);
	switch((int)d){
		case (int)'+': {
			printf("%d", a+b);
			break;
		}
		case (int)'-':{
			printf("%d", a-b);
			break;
		}
		case (int)'*':{
			printf("%d", a*b);
			break;
		}
		case (int)'/':{
			printf("%.2f", (double)a/b);
			break;
		}
	}
	
	return 0;
}
