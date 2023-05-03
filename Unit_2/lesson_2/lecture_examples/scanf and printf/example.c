#include "stdio.h"
int main()
{
    int testint;
    printf("Enter a number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&testint);
    printf("Number = %d\n", testint);
    return 0;
}