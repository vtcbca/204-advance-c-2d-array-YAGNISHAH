/*
Program : Sort Array in Accending Order
Date    : 8-Mar-2022
Author  : Yagni Shah
ID      : 21BCA93
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main()
{
	int i,j;
	char array[5][30],temp[30];
	clrscr();

	printf("Enter 5 Strings: \n");

	for(i=0; i<5; i++)
		gets(array[i]);
	clrscr();

	printf("Original array: ");
	for(i=0; i<5; i++)
		printf("\n%s",array[i]);


	for(i=0; i<5; i++)
	{
		for(j=0; j<5-1-i; j++)
		{
			if(strcmp(array[j], array[j+1]) > 0)
			{

				strcpy(temp, array[j]);
				strcpy(array[j], array[j+1]);
				strcpy(array[j+1], temp);
			}
		}
	}


	printf("Sorted Array: ");

	for(i=0; i<5; i++)
		printf("\n%s",array[i]);

	getch();
}