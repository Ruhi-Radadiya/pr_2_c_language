#include<stdio.h>
#include<conio.h>
void main()
{
double u,s,p;
clrscr();
printf("enter electricity units:");
scanf("%lf",&u);
if(u<=50){
	s=u*0.50;
}else if(u<=150){
	s=(u-50)*0.75+25;
}else if(u<=250){
	s=(u-150)*1.20+100;
}else{
	s=(u-250)*1.50+220;
}
	p=s*20/100;
printf("electricity bill:%lf",s+p);
getch();
}