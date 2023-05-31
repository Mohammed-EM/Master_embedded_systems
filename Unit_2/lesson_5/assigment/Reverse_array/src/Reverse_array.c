/*
 ============================================================================
 Name        : Reverse_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


	void inp_array(int arr[],int size);
	void reverse_array(int arr[],int size);
	void print_array(int arr[],int size);
	int main()
	{
	int arr[10];
	int size;

	printf("enter size of array");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	printf("enter %d element of array",size);
	fflush(stdin);fflush(stdout);
	inp_array(arr,size);

	printf("element before reverse\n");
	print_array(arr,size);

	reverse_array(arr,size);

	printf("\nelement after reverse \n");
	print_array(arr,size);

	}
	void inp_array(int arr[],int size)
	{
	int i;
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	}
	void print_array(int arr[],int size)
	{
	int i;

	for(i=0;i<size;i++)
	{
	printf(" %d",arr[i]);
	}
	}
	void reverse_array(int arr[],int size)
	{
	int i,j,temp;
	for(i=0,j=size-1;i<=j;i++,j--)
	{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;

	}

	}

