#include <stdio.h>
#include<string.h>
int main() {
	char input[100];
	scanf("%s",input);
	int len = strlen(input);
	int left =0;
	int right = len-1;
	char* out = (char*)malloc(sizeof(char)*len+1);
	out[0] = 0;
	int cnt=0;
	while(cnt<len){
			out[cnt] = input[right];
			right--;
			cnt++;
	}
	printf("%s", out);
	return 0;
}
