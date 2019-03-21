/* Write a program to process weekly employee time cards for all employees of
an organization. Each employee will have three data items: an identification
number, the hourly wage rate, and the number of hours worked during a given
week.

Each employee is to be paid time and a half for all hours worked over
40. A tax amount of 3.625% of gross salary will be deducted.

The program output
should show the employee’s number and net pay. Display the total payroll
and the average amount paid at the end of the run.

Input
ID, Hour Wage & Hour Work

Algorithm

Output
ID, Net Pay. total payroll & average

*/

#include <stdio.h>
#define TAX 3.625

int main (void){
	int ID, employee;
	double hourly_wage, hours_worked, overtime, overtime_pay, gross_salary, net_pay, avg_amount, payroll; 
	
	printf("Enter Total Employee : ");
	scanf("%i", &employee);
	printf("\n");

	
	for (int x=0; x<employee; x++){
		printf("Enter employee ID : ");
		scanf("%i", &ID);
		
		printf("Enter hourly wage : RM");
		scanf("%lf", &hourly_wage); // Test 10
		
		printf("Enter number of hours worked : ");
		scanf("%lf", &hours_worked); // Test 50
		
		if (hours_worked >= 40){
			overtime = hours_worked - 40; // 10
			overtime_pay = overtime * (hourly_wage*1.5); // 10 * (10*1.5) = 150
			gross_salary = (hourly_wage*40)+overtime_pay; // (10*40)+150=550
			net_pay = gross_salary-((TAX/100)*gross_salary); //	
		} else {
			gross_salary = hourly_wage*hours_worked; // (10*10)=100
			net_pay = gross_salary-((TAX/100)*gross_salary); //
		}
		
		printf("-----------------------\n");
		printf("Employee ID : %i\n", ID);
		printf("Net Pay : RM%.2lf\n", net_pay);
		printf("-----------------------\n\n");

		
		payroll += net_pay;
		
	}
	
	avg_amount = payroll/employee;	
	
	printf("=======================\n");
	printf("Total Payroll : RM%.2lf\n", payroll);
	printf("Average Amount Paid : RM%.2lf\n", avg_amount);
	printf("=======================\n");

	

	return 0;
}
