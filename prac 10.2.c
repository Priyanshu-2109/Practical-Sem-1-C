//23CS014 Chaniyara Priyanshu
#include <stdio.h>

union Book
{
    int accessionNumber;
    char title[100];
    char authorName[50];
    float price;
    int isIssued;
};

int main()
{
    union Book book;

    printf("Enter Accession Number: ");
    scanf("%d", &book.accessionNumber);
    fflush(stdin);

    printf("Enter Title of the Book: ");
    scanf(" %[^\n]", book.title);
    fflush(stdin);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book.authorName);
    fflush(stdin);

    printf("Enter Price of the Book: ");
    scanf("%f", &book.price);
    fflush(stdin);

    printf("Is the Book Issued? (1 for Yes, 0 for No): ");
    scanf("%d", &book.isIssued);
    fflush(stdin);

    printf("\nBook Information:---->\n");
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.authorName);
    printf("Price: %.2f\n", book.price);
    printf("Issued: %d\n", book.isIssued);

    return 0;
}
