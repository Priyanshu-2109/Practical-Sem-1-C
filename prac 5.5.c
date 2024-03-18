#include<stdio.h>
#include<ctype.h>
int main ()
{

    char ch;
    printf("Enter a character :");
    ch=getchar();
    printf("You entered :");
    putchar(ch);
    if (isalnum(ch))
    {
        printf("\nIt is an alphanumeric character.\n");
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                printf("It is a lowercase alphabet.\n");
                printf("Uppercase equivalent: %c\n", toupper(ch));
            }


            else if(isupper(ch))
            {

                printf("It is a uppercase alphabet.\n");
                printf("Lowercase equivalent: %c\n", tolower(ch));
            }
        }
    }
    else if(isdigit(ch))
    {
        printf("\nIt is a digit.\n");
    }
    else if(ispunct(ch))
    {
        printf("\nIt is a punctuation character.\n");
    }
    else if(isprint(ch))
    {
        printf("\nIt is a printable but non-alphanumeric character.\n");
    }
    else
    {
        printf("\nIt is a control character of non-printable character.");
    }
    printf("\nCHANIYARA PRIYANSHU 23TCSNGD\n");
    return 0;
}
