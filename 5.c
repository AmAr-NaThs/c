#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter a positive number:");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%1==0)
{
flag=1;
break;
}
}
if(n==2)
{
printf("i is neither prime nor composite.");
}
else {
if(flag==0)
printf("%d is a prime number.",n);
else
printf("%d is not a prime number",n);
}
return 0;
}

