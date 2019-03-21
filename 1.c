/* The students’ corner store in a university needs a program to implement its the 
student discount policy. The program  is to prompt the user to enter the 
purchase total and to indicate whether the purchaser is a student. Student are
eligible to receive a 20% on all the purchases. The discount 
calculation, however, must be done before addition of the 5% sales tax. This is 
done to ensure that the discount is not applied to the sales tax. Here are the 
simple output file – one for a student purchaser and one for a nonstudent purchaser. 

student purchaser: 
Total purchases				$ 122.00
Student’s discount (20%)	24.40
Discounted total			97.60
Sales tax (5%)				4.88
Total						$ 102.48

nonstudent: 
Total Purchases				$ 24.90
Sales tax (5%)				1.25
Total						$ 26.15

Note: to display a % sign, place two % signs in the format string; 
Printf("%d%%", SALES_TAX);
*/

#include <stdio.h>
#define STD_DISCOUNT 20.0
#define TAX 5.0

int main(void){
	double purchase, discount, sales_tax;
	char student;

	printf("Student <y/n> : ");
	scanf("%c", &student);
	printf("Enter purchase total : RM");
	scanf("%lf", &purchase);
	
	printf("Total purchases \t\t RM%.2lf\n", purchase);
	if (student=='y'){
		discount = purchase*(STD_DISCOUNT/100);
		printf("Student’s discount (%.0lf%%) \t RM%.2lf\n", STD_DISCOUNT, discount);
		purchase = purchase-discount;
		printf("Discounted total \t\t RM%.2lf\n", purchase);
	}
	sales_tax = purchase*(TAX/100);
	printf("Sales tax (%.0lf%%) \t\t\t RM%.2lf\n", TAX, sales_tax);
	printf("Total \t\t\t\t RM%.2lf\n", purchase+sales_tax);
	
	return 0;
}
