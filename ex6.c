#include<stdio.h>
// we have to use %d for integers
// we have to use %f for floating point numbers
// we have to use %c for char
// we have to use %s for string
// we have to use %e for scien notiation
int main (int arcg, char *argv[]){
	int distance = 100;
	float power = 12.220f;
	double super = 4223423.12132;
	char initial ='M';
	char first[]="Mahdi";
	char last[]="Hossain";

	printf("you are %d miles away\n",distance);
	printf("you have %f amount of power\n",power);
	printf("you have %f amount of super power\n",super);
	printf("your initial is %c \n", initial);
	printf("your first name is %s \n", first);
	printf("Your last name is %s \n", last); 
	printf("Your full name is %s %c %s \n",first, initial, last);

	return 0;
}
