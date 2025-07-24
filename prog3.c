#include <stdio.h>

void odd_hunt(int arr[], int size)
{
	int odd = 0;
	printf("Odd numbers are: ");

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0)
		{
			odd = 1;
			printf("%d ", i);
			odd++;
		}
	}
}

int main()
{
	int size;
	printf("Enter size of an array: ");
	scanf("%d", &size);
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		printf("Enter arr[%d] element: ", i);
		scanf("%d", &arr[i]);
	}
	odd_hunt(arr, size);

	return 0;
}