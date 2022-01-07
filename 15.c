#include<stdio.h>
#include<math.h>
int main()
{
FILE *all,*even,*odd;
int number,i,records;
printf("INPUT THE TOTAL NUMBER OF RECORDS THAT U WANT TO ENTER: ");
scanf("%d",& records);
all=fopen("ANYNUMBER","w");
for(i=1;i<=records;i++)
{
scanf("%d",&number);
if(number==-1)break;
putw(number,all);
}
fclose(all);
all=fopen("ANYNUMBER","r");
even=fopen("EVENNUMBER","w");
odd=fopen("ODDNUMBER","w");
while((number=getw(all))!=EOF)
{
if(number%2==0)
putw(number,even);
else
putw(number,odd);
}
fclose(all);
fclose(even);
fclose(odd);
even=fopen("EVENNUMBER","r");
odd=fopen("ODDNUMBER","r");
printf("THE EVEN NUMBERS ARE: ");
while((number=getw(even))!=EOF)
printf(" %4d",number);
printf("\nTHE ODD NUMBERS ARE: ");
while((number=getw(odd))!=EOF)
printf("  %4d",number);
printf("\n");
fclose(even);
fclose(odd);
}
