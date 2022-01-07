#include<stdio.h>
int main()
{
int i,n,m,j=0,temp,a[20],b[20],c[20];
printf("enter the limit of 1st array");
scanf("%d",&n);
printf("enter the limitr of 2nd array");
scanf("%d",&m);
printf("enter the elements of 1st array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter tehe elements of 2nd array");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[j]=a[i];
j++;
}
for(i=0;i<m;i++)
{
c[j]=b[i];
j++;
}
printf("array after merging:\n");
for(i=0;i<n+m;i++)
{
printf("%d\t",c[i]);
}
for(j=i+1;j<n+m;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
printf("\n");
return 0;
}
