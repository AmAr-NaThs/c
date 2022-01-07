#include<stdio.h>
#define SIZE 9
int main()
{
int amount, notes;

int denominations[SIZE] = { 2000, 500, 200, 100, 50, 20, 10, 5, 1 };
printf("Enter amount: ");
scanf("%d", &amount);
printf("\n");
for (int i = 0; i < SIZE; i++)
{
notes = amount / denominations[i];
if (notes)
{
amount = amount % denominations[i];
printf("%d * %d = %d \n", notes, denominations[i],
notes * denominations[i]);
}
}
return 0;
}
