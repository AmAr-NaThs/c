#include<stdio.h>
int main()
{
int n,i=0,j,chk;
printf("Enter the limit: ");
scanf("%d",&n);
printf("prime number are: \n ");
while(i<=n)
{
chk=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
   chk=chk+1;
}
if(chk==2)
   printf("%d\n",i);
i++;
}
return 0;
}

