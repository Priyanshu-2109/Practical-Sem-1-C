#include <stdio.h>

int main()
{
    int choice, num, i, originalNum, remainder, result, n, sum;

    do
    {
        printf("\nMenu:\n");
        printf("1. Prime or not\n");
        printf("2. Armstrong number or not\n");
        printf("3. Perfect number or not\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num <= 1)
            {
                printf("%d is not a prime number.\n", num);
            }
            else
            {
                int isPrime = 1;

                for (i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime)
                {
                    printf("%d is a prime number.\n", num);
                }
                else
                {
                    printf("%d is not a prime number.\n", num);
                }
            }
            break;

        case 2:

            printf("Enter a number: ");
            scanf("%d", &num);

            originalNum = num;
            n = 0;
            while (originalNum != 0)
            {
                originalNum /= 10;
                ++n;
            }

            originalNum = num;
            result = 0;
            while (originalNum != 0)
            {
                remainder = originalNum % 10;
                result += remainder * remainder * remainder;
                originalNum /= 10;
            }

            if (result == num)
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

            i = 1;
            sum = 0;
            do
            {
                if (num % i == 0)
                {
                    sum += i;
                }
                i++;
            }
            while (i < num);

            if (sum == num)
            {
                printf("%d is a Perfect number.\n", num);
            }
            else
            {
                printf("%d is not a Perfect number.\n", num);
            }
            break;

        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    }
    while (choice != 4);
    return 0;
}
