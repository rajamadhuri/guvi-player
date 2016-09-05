#include<stdio.h>
#include<conio.h>
void main()
{
int n,fd,ld,sum;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
fd=n/10;
ld=n%10;
}
sum=fd+ld;
printf("sum of first and last digit is:%d",sum);
getch();
}
