/*
 ============================================================================
 Name        : quiz_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverso (int arr[])
{
int reversed_arr [100];
int arr_size = sizeof(arr)/sizeof(arr[0]);
printf("Array size : %d \n",sizeof(arr));
for(int i =0;i<arr_size;i++)
{
reversed_arr[i]=arr[arr_size-i];
}
printf("output:");
for(int i= 0;i<arr_size;i++)
{
printf("%d ",reversed_arr[i]);
}
}
int main() {
int arr[]={1,2,3,4,5};
Reverso(arr);
    return 0;
}
