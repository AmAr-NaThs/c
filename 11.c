#include<stdio.h>
int main()
{
int num,r,sum,temp;
int stno,enno;
printf("Input the starting number of range:");
scanf("%d",&stno);
printf("Input the ending number of the range");
scanf("%d",&enno);
printf("Armstrong number in the range are: ");
for(num=stno;num<=enno;num++)
{
temp=num;
sum=0;
while(temp!=0)
{
r=temp%10;
temp=temp/10;
sum=sum+(r*r*r);
}
if(sum==num)
printf("%d",num);
}
return 0;
}
