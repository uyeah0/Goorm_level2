#include <stdio.h>
int main() {
	int input;
	char* a = "True";
	scanf("%d",&input);
	for(int i =2; i < input; i++){
		if(input%i==0) { a = "False"; break;}
	}
	printf("%s", a);

	return 0;
}
