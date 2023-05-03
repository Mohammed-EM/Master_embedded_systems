#include "stdio.h"
int main()
{
    double f;
    printf("Enter a number: ");
    fflush(stdout);fflush(stdin);
    scanf("%lf",&f);
    printf("Number = %lf\n", f);
    return 0;
}