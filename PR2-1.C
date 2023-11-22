#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter number:");
scanf("%d",&a);
(a%2==0)?printf("number is even")
	:printf("number is odd");
	getch();
}