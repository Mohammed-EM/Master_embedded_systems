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
void Reverso (int arr[],int arr_size)
{
int reversed_arr [100];

for(int i =0;i<arr_size;i++)
{
reversed_arr[i]=arr[arr_size-1-i];
}
printf("output:");
for(int i= 0;i<arr_size;i++)
{
printf("%d ",reversed_arr[i]);
}
}
int main() {
int arr[]={1,2,3,4,5};
int arr_size = sizeof(arr)/sizeof(arr[0]);
printf("Array size : %d \n",sizeof(arr));
Reverso(arr,arr_size);
    return 0;
}
