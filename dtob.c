#include<stdio.h>
#include<conio.h>
long binary(int)
int main()
{
long bin;
int dec;
printf("enter the decimal number:");
scanf("%d",&dec);
bin=binary(dec);
printf("the binary value is:%ld",bin);
return 0;
}
long binary(int dec)
{
static long bin,rem,div=1;
if(dec!=0)
{
rem=dec%2;
bin=bin+rem*div;
div=div*10;
binary(dec/2);
}
return bin;
}
