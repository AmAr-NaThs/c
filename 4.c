#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int len,i,word=1;
printf("Enter a string");
scanf("%[^\n]s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]!=' '&& a[i+1]==' ')
word=word+1;
}
printf("There are %d words in the string:",word);
return 0;
}
