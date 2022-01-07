#include<stdio.h>

#include<math.h>

int main()

{ 

double term,deno,lob,sum;


term=1.0;

sum=1.0; lob=1.0;deno=2.0; while(term>=0.0001) {
term=lob/deno;

term=pow(term,deno);

sum+=term;
deno++;
printf("%lf",sum);

}

printf("the sum= %lf",sum); 
return 0;

}
