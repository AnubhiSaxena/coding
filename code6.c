#include<stdio.h>
#include<conio.h>
viod main()
{
int y;
clrscr();
printf("enter year:");
scanf("%d",&y);
if(y%4==0)
{
if(y%100==0)
{
if(y%400==0)
printf("%d is a leap year.",y);
else
printf("%d the year is not a leap year.",y);
}
else
printf("%d is a leap year.",y);
}
else
printf("%d is not a leap year."y);
getch();
}
