#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num)
{
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, 3);
        originalNum /= 10;
    }

    return result == num;
}

// Function to check if a number is a perfect number
int isPerfect(int num)
{
    int sum = 1;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i != num)
            {
                sum = sum + i + num / i;
            }
            else
            {
                sum = sum + i;
            }
        }
    }

    return sum == num;
}

int main()
{
    int choice, num;

    do
    {
        printf("Menu:\n");
        printf("1. Check if a number is prime\n");
        printf("2. Check if a number is an Armstrong number\n");
        printf("3. Check if a number is a perfect number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
            {
                printf("%d is a prime number.\n", num);
            }
            else
            {
                printf("%d is not a prime number.\n", num);
            }
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
            {
                printf("%d is an Armstrong number.\n", num);
            }
            else
            {
                printf("%d is not an Armstrong number.\n", num);
            }
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPerfect(num))
            {
                printf("%d is a perfect number.\n", num);
            }
            else
            {
                printf("%d is not a perfect number.\n", num);
            }
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    }
    while (choice != 4);

    return 0;
}
