/*
Write a program that calculates the user’s body mass index (BMI) and categorizes
it as underweight, normal, overweight, or obese, based on the following
table from the United States Centers for Disease Control:

BMI 			Weight Status
Below 18.5		Underweight
18.5–24.9 		Normal
25.0–29.9 		Overweight
30.0 and above 	Obese

To calculate BMI based on weight in pounds ( wt_lb ) and height in inches
( ht_in ), use this formula (rounded to tenths):
703 * wt_lb / ht_in²

Prompt the user to enter weight in pounds and height in inches.
*/

#include <stdio.h>

int main (void){
	float wt_lb=200, ht_in=80, bmi;
	
	bmi = 703 * wt_lb / (ht_in * ht_in);
	
	printf("Your BMI : %.1f\n", bmi);
	if (bmi < 18.5)
		printf("Underweight");
	else if (bmi < 25.0)
		printf("Normal");
	else if (bmi < 30.0)
		printf("Overweight");
	else
		printf("Obese");
	return 0;
}
