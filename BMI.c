/* Justin Isaraphanich
EEL 2161
10-4-2022
ASSIGNMENT 4
GOAL: CALCULATE BMI*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

double height, weight;
double BMI;

void Welcome(void);
double OutPut(BMI);
double BMICalc(weight, height);

int main(void)
{
	Welcome();
	BMICalc( height, weight);
	OutPut(BMI);
	
	int count = 0;
	while (count < 5) {

		printf("*");
		count += 1;
	}
	return(0);
}

void Welcome(void)
{
	printf("Welcome to Justin's BMI Calculator\n"); //greet user

	
	printf("Please enter your height in inches: \n");//get height
	scanf_s("%lf", &height);

	printf("Please enter your weight in pounds: \n"); //get weight
	scanf_s("%lf", &weight);

	
}

double BMICalc(double weight, double height)
{
	 //establish BMI

	BMI = 703.07 * (weight / (height * height));

	return(BMI); //return bmi var to code

}

double OutPut(BMI)
{

	if (BMI < 18.5)
		printf("You are Underweight. \n");
	if (BMI >= 18.5 && BMI < 25)
		printf("You are normal weight. \n");
	if (BMI >= 25 && BMI < 30)
		printf("You are overweight. \n");
	if (BMI > 30)
		printf("You are Obese. \n");
	return (0);
}