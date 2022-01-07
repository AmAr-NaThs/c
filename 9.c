#include<stdio.h>
#include<string.h>
int main()
{
char ch[30];
int i;
printf("Enter the string");
scanf("%[^\n]s",ch);
printf("Short form of the word %s is: ",ch);
for(i=0;i<30;i++)
{
if(i==0)
{
printf("%c",ch[i]);
}
if(ch[i]==' ')
{
printf("%c",ch[i+1]);
}
}
printf("\n");
return 0;
}
