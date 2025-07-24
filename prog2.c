#include <stdio.h>

void average(int rows, int cols, int a[rows][cols])
{
	float sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += a[i][j];
		}
	}
	float average = sum / (rows * cols);
	printf("Average of numbers provided within an array is: %.2f\n", average);
}

int main()
{
	int rows, cols;
	printf("Enter size of rows: ");
	scanf("%d", &rows);
	printf("Enter size of column: ");
	scanf("%d", &cols);
	int arr[rows][cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("Enter a[%d][%d] element: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	average(rows, cols, arr);

	return 0;
}