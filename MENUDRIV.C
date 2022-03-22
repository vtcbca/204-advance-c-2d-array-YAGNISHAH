/* write a menu driven program which perform following operation using categry of udf
author : Yagni Shah
date : 22-feb-2022*/
#include<stdio.h>
#include<conio.h>
int menu();  // function without argument with return type
void sum();  // function without argument without return type
int pal(int); // function with argument with return type
int arm(int);  // function with agrument without return type
int squr();

void main()
{
	int a,b,c;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				sum();
				break;
			case 2:
				printf("\n enter in value:");
				scanf("%d",&a);
				c=pal(a);
				if(a==c)
					printf("%d is palindrom",a);
				else
					printf("%d is not palindrom",a);
				break;
			case 3:
				printf("enter int value :");
				scanf("%d",&a);
				c=arm(a);
				if(a==c)
					printf("%d is armstrong",a);
				else
					printf("%d is not armstrong",a);
				break;
		}
		printf("\n do you want to continue ? (yes=y/Y,no=n/N):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}

int menu()
{
	int choice;
	printf("\n\t\t menu \n");
	printf("*******************************************");
	printf("\n\t 1. sum of digites");
	printf("\n\t 2. palindrom number");
	printf("\n\t 3. armstrong number");
	printf("\n\t 4. square series");
	printf("\n\t 5. exit");
	printf("\n\t\t enter choice :");
	scanf("%d",&choice);
	return choice;
}

void sum()
{
	int p,q=0,r=0;
	printf("enter int value :");
	scanf("%d",&p);
	while(p!=0)
	{
		q=p%10;
		r=r+q;
		p=p/10;
	}
	printf("\n sum of digits is %d",r);
}

int pal(a)
{
	int x,y,c=0;
	while(x!=0)
	{
		y=x%10;
		c=c*10+y;
		x=x/10;
	}
	if(c==a)
		return 0;
	else
		return 1;
}

int arm(a)
{
	int sum=0,x;
	while(x!=0)
	{
		x=x%10;
		sum=sum+(x*x*x);
		x=x/10;
	}
	return a;
}
