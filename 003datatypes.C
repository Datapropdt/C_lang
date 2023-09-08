/* program to read values to different datatype variables and print them */
#include<stdio.h>
main()
{
int a;
float b;
char ch;
double d;
unsigned e;

clrscr(); /* to clear ouput screen contents */
printf("enter integer value for a "); scanf("%d",&a);  /* %d for int */
printf("enter float value for b "); scanf("%f",&b);  /* %f for float*/
fflush(stdin); /* to clear input buffer contents-stdio.h */
printf("enter a char value for ch "); scanf("%c",&ch);/* %c for single letter
					 %s for more than one letter*/
printf("enter value for double value d "); scanf("%lf",&d); /* %lf for double*/
printf("enter value for unsigned e "); scanf("%u",&e); // %u for unsigned

printf(" a = %d",a);
printf(" b = %f",b);
printf(" ch = %c",ch);
printf(" d = %0.14lf",d);
printf(" e = %u",e);
getch();

}
