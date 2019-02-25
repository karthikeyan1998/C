#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the nymber");
scanf("%d",&n);
if(n<0)
{
printf("invalid");
}
if(n%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
getch();
}
