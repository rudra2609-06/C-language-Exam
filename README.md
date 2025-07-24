# C-language-Exam
# README for C Programs

This README file provides an overview of several C programs that perform various tasks, including calculating averages, identifying odd and even numbers, and printing patterns. Each section includes a brief description of the program, its functionality, and space for screenshots of the output.

## Table of Contents
1. [Average Marks Calculation](#average-marks-calculation)
2. [Average of 2D Array](#average-of-2d-array)
3. [Odd Number Hunt](#odd-number-hunt)
4. [Even Number Hunt](#even-number-hunt)
5. [Number Pattern Printing](#number-pattern-printing)

---

## Average Marks Calculation

### Description
This program calculates the average marks of five subjects entered by the user and assigns a grade based on the average.

### Functionality
- Prompts the user to enter marks for five subjects.
- Calculates the average of the entered marks.
- Assigns a grade based on the average:
  - A: 90-100
  - B: 80-89
  - C: 70-79
  - D: 60-69
  - E: Below 60

### Code
```c
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

    printf("Your average marks is: %.2f\n", average);

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
```

### Output Screenshot
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/c6ec06a8-50b0-42e8-b9c6-b8eeda4a36c4" />


---

## Average of 2D Array

### Description
This program calculates the average of numbers provided in a 2D array.

### Functionality
- Prompts the user to enter the number of rows and columns for the array.
- Accepts elements for the array.
- Calculates and displays the average of all elements in the array.

### Code
```c
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
```

### Output Screenshot
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/936ce3d9-de66-4d46-a54a-aea41544b38a" />


---

## Odd Number Hunt

### Description
This program identifies and prints odd numbers from an array provided by the user.

### Functionality
- Prompts the user to enter the size of the array.
- Accepts elements for the array.
- Prints all odd numbers from the array.

### Code
```c
#include <stdio.h>

void odd_hunt(int arr[], int size)
{
    int odd = 0;
    printf("Odd numbers are: ");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd = 1;
            printf("%d ", arr[i]);
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
```

### Output Screenshot
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/26bbb8c1-5de2-4633-a333-c82c3173b4af" />


---

## Even Number Hunt

### Description
This program identifies and prints even numbers from an array provided by the user.

### Functionality
- Prompts the user to enter the size of the array.
- Accepts elements for the array.
- Prints all even numbers from the array.

### Code
```c
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
```

### Output Screenshot
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/1f96c9c4-07d8-4aa9-a86b-f5a2e4cd62f3" />



---

## Number Pattern Printing

### Description
This program prints a specific number pattern based on a nested loop structure.

### Functionality
- Uses nested loops to print a pattern of numbers in a triangular format.

### Code
```c
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int k = 0; k < 5 - i; k++)
        {
            printf("  ");
        }

        for (int j = 10 - i; j <= 10; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
```

### Output Screenshot
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/da7081f7-0c18-4284-b7d9-893b77d3efe0" />


---

## Conclusion
This README provides a comprehensive overview of the various C programs included in this project. Each program serves a specific purpose and demonstrates fundamental programming concepts in C. You can replace the placeholder paths for the screenshots with actual paths to the output images after running the programs.
