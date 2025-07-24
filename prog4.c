#include <stdio.h>

void even_hunt(int arr[], int *size)
{

	int even = 0;
	printf("Even numbers are: ");
	for (int i = 0; i < *size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even = 1;
			printf("%d ", arr[i]);
			even++;
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
		printf("Enter a[%d] element: ", i);
		scanf("%d", &arr[i]);
	}

	even_hunt(arr, &size);

	return 0;
}