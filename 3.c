/* write a program that estimates the temperature in a freezer (in C) given the
elapesed time (hours) since the power failure. Assume this temperature (T) is given by

T = (4T²/t+2)-20

where t is the time since the power failure. Your program should prompt the user to
enter how long it has been since the start of power failure in whole hours and minutes.
Note that you will need to convert the elapsed time into hours. For example, if the
user entered 2 30 (2 hours 30 minutes), you would need to convert this to 2.5 hours. */

#include <stdio.h>

int main(void) {

	double T, hours, minutes, time;
	
	printf("Enter the elapsed time (hours<space>minutes) : ");
	scanf("%lf %lf", &hours, &minutes);
	
	time = hours + (minutes/60);
	T = (4 * time * time) / (time + 2) - 20;
	
	printf("The eplased time : %.1lf hours\n",time);
	printf("Estimates the temperature in a freezer : %.2f °C\n",T);

	return 0;
}
