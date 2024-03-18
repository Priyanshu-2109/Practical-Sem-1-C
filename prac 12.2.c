//23CS014 Chaniyara Priyanshu
#include <stdio.h>
int main()
{
    FILE *file;
    char letter;
    file = fopen("ALPHABETS.txt", "w");
    if (file == NULL)
    {
        perror("Error creating file");
        return 1;
    }
    for (letter = 'A'; letter <= 'Z'; ++letter)
    {
        fputc(letter, file);
    }
    fclose(file);
    file = fopen("ALPHABETS.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    long position = ftell(file);
    while (--position >= 0)
    {

        fseek(file, position, SEEK_SET);
        printf("%c", fgetc(file));

    }
    rewind(file);
    fclose(file);
    printf("\n\n23CS014 Chaniyara Priyanshu");
    return 0;
}
