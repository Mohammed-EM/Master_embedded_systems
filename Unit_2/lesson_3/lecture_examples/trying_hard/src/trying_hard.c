#include "stdio.h"
#include "stdlib.h"
int main(){
    double temperatue;
    // supply the temperatue in fahrenheit
    printf("Enter the temperature in fahrenheit : \r\n");
    fflush(stdout);fflush(stdin);
    scanf("%lf", &temperatue);
    /*convert the temperature
    from fahrenheit to degrees*/
    temperatue= (temperatue -32.0) * 5.0/9.0;
    // print
    // the result
    printf("the temperature in degrees is %lf\r\n",temperatue);
}
