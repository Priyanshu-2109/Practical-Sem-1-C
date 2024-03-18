//23CS014 Chaniyara Priyanshu
#include<stdio.h>

struct BookDetail
{
    char title[100];
    char author[100];
    float amount;
};

void displayBookDetails(struct BookDetail book)
{
    printf("\nBook Title: %s\n", book.title);
    printf("\nAuthor: %s\n", book.author);
    printf("\nAmount: INR %.2f\n", book.amount);

}

int main()
{
    struct BookDetail myBook;

    printf("Enter book title:");
    scanf("%[^\n]",myBook.title);

    printf("Enter Author name:");
    scanf("%s",myBook.author);

    printf("Enter Amount of Book:");
    scanf("%f",&myBook.amount);

    displayBookDetails(myBook);

    return 0;
}
