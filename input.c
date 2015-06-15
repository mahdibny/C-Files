#include<stdio.h>
#define EOF (-1)
int main(){
	int c;
	printf("Enter an input or CTRL-d to exit:\n");
	while((c=getchar())!=EOF){
		putchar(c);
	}
	return 0;
}
