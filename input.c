#include<stdio.h>
#define EOF (-1)
int main(){
	int c;
	while((c=getchar())!=EOF){
		putchar(c);
	}
	return 0;
}
