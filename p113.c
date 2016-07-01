#include<stdio.h>
#include<conio.h>
void main()
{
int dd,mm,yyyy;
printf("Enter the date dd/mm/yyyy\n");
scanf("%d/%d/%d",&dd,&mm,&yyyy);
if((dd>=1 && dd<=31) &&(mm>=1 && mm<=12)&& (yyyy>=999))
{
printf(" true");
}
else
{
printf("false\n");
}
getch();
}
