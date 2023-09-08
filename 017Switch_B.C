/* program to read to values and an operator find and print result */
#include <stdio.h>
main()
{
float a,b,res;
char op;

clrscr();

printf("\n enter two values ");scanf("%f%f",&a,&b);
printf("\n choose any operator +,-,*,/  :  ");
fflush(stdin); /* very very imp for this program */
scanf("%c",&op);

switch(op)
{
case '+': res = a + b; break;
case '-': res = a - b; break;
case '*': res = a * b; break;
case '/': res = a / b; break;

default: printf(" invalid operator ");
}

printf("\n result = %f",res);

getch();
}