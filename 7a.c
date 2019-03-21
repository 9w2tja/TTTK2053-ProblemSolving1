/* Write a program to process a collection of the epeeds of vehicles.
Your program should count and print the number of vehicles moving at a high
speed (90 miles/hour or higher), the number of vehicles moving at a
medium speed (50-90 miles/hour), and the number of vehicles moving at
a slow speed (less than 50 miles/hour). It should also display the category
of each vehicle. Test your program on the following data:

Speed of vehicles (in miles): 43 23 54 57 58 67 51 90 22 33 11
88 34 52 75 12 78 32 89 14 65 67 97 53 10 47 34*/

#include <stdio.h>
int speed, slow=0, medium=0, high=0;
int main (void){

	printf("Enter speed of vehicles (in miles) : ");
	scanf("%i", &speed);
	
	if (speed != 0){
		if (speed < 50)
			slow++;
		else if (speed < 90)
			medium++;
		else
			high++;
		return main();
	}
	
	printf("Total vehicles high speed : %i\n", high);
	printf("Total vehicles medium speed : %i\n", medium);
	printf("Total vehicles slow speed : %i\n", slow);
	return 0;
}
