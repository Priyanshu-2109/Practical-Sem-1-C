//23CS014 Chnaniyara Priyanshu
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
char *str;
int initialSize = 5;


str = (char *)calloc(initialSize, sizeof(char));
if (str == NULL)
{
    printf("Memory allocation failed!");
    exit(0);
}


strcpy(str, "Hello");


printf("Initial string: %s\n", str);


int newSize = initialSize * 2;
str = (char *)realloc(str, newSize * sizeof(char));
if (str == NULL)
{
    printf("Memory reallocation failed!");
    return 1;
}
strcat(str, " world! This is a larger string now.");
printf("Modified string: %s\n", str);
printf("\n\n23CS014 Chaniyara Priyanshu");
free(str);
return 0;
}

