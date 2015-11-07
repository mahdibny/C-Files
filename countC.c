#include<stdio.h>
int main(){
	double nc;
	printf("Enter a character of a string: \n");
	for(nc=0;getchar()!=EOF;++nc){
		printf("%.0f\n",nc);
	}
	return nc;
}
