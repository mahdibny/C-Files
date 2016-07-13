#include <stdio.h>

int main (int argc, char *argv[]){
	// create two arrays we char about 
	int ages[] = {23,43,12,89,2};
	char *names[] = {"Alan","Frank","Mary","John","Lisa"};

	// safely get the size of ages
	int count = sizeof(ages)/sizeof(int);
	int i = 0;

	// first way using indexing 
	for (i =0; i < count; i++){
		printf("%s has %d years alive. \n", names[i], ages[i]);
	}

	printf("---\n");

	// setup the pointers to the start of the arrays
	int *cur_ages = ages;
	char **cur_name = names;

	// second way using pointers
	for(i=0; i<count; i++){
		printf("%s is %d years old again.\n", *(cur_name+i), *(cur_ages+i));
	}

	printf("---\n");

	// third way, pointers are just arrays
	for(i=0; i<count; i++){
		printf("%s is %d years old again.\n", cur_name[i], cur_ages[i]);
	}

	printf("---\n");

	for(cur_name = names, cur_ages = ages; (cur_ages-ages) < count; cur_name++, cur_ages++){
		printf("%s lived %d years so far .\n", *cur_name, *cur_ages);
	}

	return 0;
}
