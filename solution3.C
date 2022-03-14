/*
Program : WAP to Perform Multiplication on 2D Array
Date    : 01-03-2022
Author  : Yagni Shah
ID      : 21BCA93
*/

//Needed Headerfiles

#include<stdio.h>
#include<conio.h>

void main()
{

	int m1[3][3],m2[3][3],m3[3][3],i,j,k;
	clrscr();

	printf("\t\t\t Matrix Multiplication \n");
	printf("\nEnter Values Into Matrix 1 : \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter The Value for Matrix 1 [%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}

	clrscr();


	printf("\nEnter Values Into Matrix 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter The Value for Matrix 2 [%d][%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j] = 0;

			for(k=0;k<3;k++)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}


	clrscr();

	printf("\t\t\t Multiplication of Matrix  \n\n");
	printf("\n Matrix 1 : \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m1[i][j]);
		printf("\n");
	}

	printf("\n Matrix 2 : \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m2[i][j]);
		printf("\n");
	}

	printf("\n Multiplication of Matrix 1 and 2 : \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m3[i][j]);
		printf("\n");
	}
	getch();
}