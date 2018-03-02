#include <stdio.h>
#include <math.h>

void welcome (void)
{
	printf("----------BMI Calculator----------\n");
}


int getHeight (void)
{
	int height;
	printf("Enter height (in cm): ");
	scanf("%d", &height);
	return (height);
}


double getInputDouble (void)
{
	double weight;
	printf("Enter weight (in kg): ");
	scanf("%lf", &weight);
	return (weight);
}


double calculateBMI (int height, double weight)
{
	double heightM;
	double BMI;
	heightM = (double)height/100;
	BMI = weight/pow(heightM, 2);
	return (BMI);
}


void printBMICategory (double bmi)
{
	if(bmi >= 0 && bmi <= 18.49)
	{
		printf("Underweight\n");
	} 
	
	else if(bmi >= 18.5 && bmi <= 24.49)
	{
		printf("Normal\n");
	}
	
	else if(bmi >= 24.5 && bmi <= 29.99)
	{
		printf("Overweight\n");
	}
	
	else if(bmi >= 30)
	{
		printf("Obesity\n");
	}			
}


void printInfo (int height, double weight)
{	
	double BMI;
	printf("Height: %d cm\n", height);
	printf("Weight: %lf kg\n", weight);
	BMI = calculateBMI(height, weight);
	printf("BMI: %lf kg/m2\n", BMI);
	printBMICategory(BMI);
}

int main()
{
	int height;
	double weight;
	welcome();
	height = getHeight();
	weight = getInputDouble();
	printInfo(height, weight);
	return 0;
}
