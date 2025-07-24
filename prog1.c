#include <stdio.h>

int main()
{
	float s1, s2, s3, s4, s5;
	float average;
	char grade;
	printf("Enter marks of subject 1: ");
	scanf("%f", &s1);
	printf("Enter marks of subject 2: ");
	scanf("%f", &s2);
	printf("Enter marks of subject 3: ");
	scanf("%f", &s3);
	printf("Enter marks of subject 4: ");
	scanf("%f", &s4);
	printf("Enter marks of subject 5: ");
	scanf("%f", &s5);

	average = (s1 + s2 + s3 + s4 + s5) / 5;

	printf("Your average marks is:%.2f\n", average);

	if (average <= 100 && average >= 90)
	{
		printf("Your grade is A\n");
	}
	else if (average < 90 && average >= 80)
	{
		printf("Your grade is B\n");
	}
	else if (average < 80 && average >= 70)
	{
		printf("Your grade is C\n");
	}
	else if (average < 70 && average >= 60)
	{
		printf("Your grade is D\n");
	}
	else
	{
		printf("You are fail your grade is E\n");
	}

	return 0;
}