//This code is prepared by 23CS014_Div_1
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, i;
    printf("For the quadratic equation ax^2+bx+c=0 please enter the value of a,b and c respectively :");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    printf("Discriminant = %.2f\n", d);
    switch (d > 0)
    {
    case 1:
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots of the given equation are %.2f and %.2f\n\n", r1, r2);
        break;
    case 0:
        switch (d < 0)
        {
        case 1:
            r1 = r2 = (-b) / (2 * a);
            i = sqrt(-d) / (2 * a);
            printf("Roots of the given equation are %.2f and %.2f & imaginary part of the root of the equation is i(%.2f)\n\n", r1, r2, i);
            break;
        case 0:
            r1 = r2 = (-b) / (2 * a);
            printf("Roots of the given equation are %.2f and %.2f\n\n", r1, r2);
            break;
        }
        break;
    }
    printf("23CS014_Priyanshu\n");
    return 0;
}
