#include<stdio.h> 
int main() 
{

int i,j,a[5][5],r,c;

printf("Enter row size :");
scanf("%d",&r); 
printf("Enter col size :"); 
scanf("%d",&c);
printf("Enter elements.. \n"); 
for(i=0;i<r;i++) 
{ 

for(j=0; j<c; j++) 
{ 

scanf("%d",&a[i][j]);

} 
}
printf("Result is....\n");
for (i=0;i<r;i++) 
{
for(j=0;j<c;j++)

{ 

if(i>j)
a[i][j]=-1;

else
a[i][j]=1;
}

} 
for(i=0;i<r;i++)

{ 

for(j=0; j<c; j++) 
{

if(i==j)
{
a[i][j]=0;

}
}
}
for (i=0;i<r; i++) {

for(j=0;j<c; j++) {

printf(" %d", a[i][j]);

} printf("\n");

} 
return 0;

}
