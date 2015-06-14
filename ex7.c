#include<stdio.h>

int main (int argc, char *argv[]){
	int bug = 100;
	double bug_rate=10.24;
	printf("we have %d bugs moving at a rate of %f m/s \n", bug, bug_rate);
	
	long universe_of_defects =1L*1024L*1024L*1024L;
	printf("The universe have %ld number of bugs\n",universe_of_defects);

	double expected= bug*bug_rate;
	printf("The universe expects %f number of bugs. \n",expected);

	double part_of_uni=expected/universe_of_defects;
	printf("This is only a %e part of the universe.\n", part_of_uni);

	char null_byte='\0'; // means the number 0
	int char_per=bug *null_byte;
	printf("Which means you should care %d%%.\n", char_per);// %% mean to add the percent sign at the end o:

	return 0;
}
