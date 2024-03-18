//23CS014 Chaniyara Priyanshu
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *file1, *file2, *file3;
    int number;
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <Data1.txt> <Data2.txt> <Data3.txt>\n", argv[0]);
        printf("\n\n23CS014 Chaniyara Priyanshu");
        return 1;
    }
    file1 = fopen(argv[1], "r");
    if (file1 == NULL)
    {
        perror("Error opening Data1.txt");
        return 1;
    }
    file2 = fopen(argv[2], "r");
    if (file2 == NULL)
    {
        perror("Error opening Data2.txt");
        fclose(file1);
        return 1;
    }
    file3 = fopen(argv[3], "w");
    if (file3 == NULL)
    {
        perror("Error creating Data3.txt");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while (fscanf(file1, "%d", &number) == 1)
    {
        fprintf(file3, "%d\n", number);
    }
    while (fscanf(file2, "%d", &number) == 1)
    {
        fprintf(file3, "%d\n", number);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    printf("Merged list has been written to %s\n", argv[3]);
    printf("\n\n23CS014 Chaniyara Priyanshu");
    return 0;
}


