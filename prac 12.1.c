//23CS014 Chaniyara Priyanshu
#include<stdio.h>
int main()
{
    FILE *sourceFile, *destinationFile;
    char character;
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        printf("\n\n23CS014 Chaniyara Priyanshu");

        return 1;
    }
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }
    while (1)
    {
        character = fgetc(sourceFile);


        if (feof(sourceFile))
        {
            break;
        }
        if (ferror(sourceFile))
        {
            perror("Error reading from source file");
            break;
        }
        fputc(character, destinationFile);
        putchar(character);
    }
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

