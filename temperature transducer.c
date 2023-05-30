#include<stdio.h>

void printmenu()
{
	printf("=================================\n");
	printf(" 'c' Celsius to Fahrenheit\n");
	printf(" 'f' Fahrenheit to Celsius\n");
	printf(" 'q' quit\n");
	printf("=================================\n");
}

double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void)
{
	char choice;
	double temp;
	while (1)
	{
		printmenu();
		printf("Please select from the menu: ");
		choice = getchar();
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("Celsius: ");
			scanf("%lf", &temp);
			printf("Fahrenheit: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f')
		{
			printf("Fahrenheit: ");
			scanf("%lf", &temp);
			printf("Celsius: %lf \n\n", F2C(temp));
		}
		getchar();
	}
	return 0;
}
