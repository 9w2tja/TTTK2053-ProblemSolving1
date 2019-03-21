/* Modify your program to display the average speed of a vehicle (a real number)at the end of the run */

#include <stdio.h>
int speed, slow=0, medium=0, high=0, total_speed, avg_speed;
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
		total_speed += speed;
		return main();
	}
	
	avg_speed = total_speed/(high+medium+slow);
	printf("Total vehicles high speed : %i\n", high);
	printf("Total vehicles medium speed : %i\n", medium);
	printf("Total vehicles slow speed : %i\n", slow);
	printf("Average speed of a vehicle = %i", avg_speed);
	return 0;
}
