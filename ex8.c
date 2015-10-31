#include<stdio.h>

int main (int argc, char* argv[]){
	int areas[]={10,12,13,14,20};
	char name[] ="mahdi";
	char full[]={'m','a','h','d','i',' ','m','.',' ' ,'h','o','s','s','a','i','n','\0'};
	
	printf("The size of an int: %ld\n", sizeof(int));
	// the size of an int here is equal to 4 bytes and it depends
	// on the version of your computer such as 32 and 64 bit
	
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	// so here we look at the size of the array and the computer 
	// gives us 20 which makes sense, we have 5 integers each with
	// 4 bytes of space that they take up
	
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	// then when we divide the size of the array by the type of the said
	// array we obtain the number of elements in the array 
	
	printf("The first area is %d, the 2nd %d.\n",areas[0],areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of a name (char[]): %ld\n", sizeof(name));
	printf("The size of chars: %ld\n", sizeof(name)/sizeof(char));
	printf("The size of full (char[]): %ld\n", sizeof(full));
	printf("The number of chars: %ld\n", sizeof(full)/sizeof(char));
	printf("name=\"%s\" and full =\"%s\"\n", name, full);
	
	return 0;
}



