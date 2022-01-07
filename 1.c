#include<stdio.h>
int main()
{
int r=0,sum=0,d,n;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
d=n%10;
sum=sum+d;
r=(r*10)+d;
n=n/10;
}
printf("\n Sum of digits=%d",sum);
printf("\n Reverse %d",r);
printf("\n");
return 0;
}
