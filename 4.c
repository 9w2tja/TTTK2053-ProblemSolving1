/* Write a program to convert a sum of money in US dollars to British pounds.
DATA REQUIREMENTS */

#include <stdio.h>
/* Relevant Formula
1 USD = 0.65 GBP */
#define GBP 0.65
int main(){
	//Problem Input
	float dollar = 50; /*currency in US dollars*/
	//Problem Output
	float pound; /*currency in British pounds*/
	pound = dollar * GBP;
	printf("Convert %.2f US dollars = %.2f British pounds", dollar, pound);
	
	return 0;
}
