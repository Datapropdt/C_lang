/* pointer variable : is a special type variable which holds the address
of a variable. a variable holds the value. pointer variable holds the
address of it. it a can be declared using *.

int *p; p is a pointer variable pointed to integer type of data.
*/

main()
{
int a=32567;
float b = 4.56;
char c = 'C';
double d=5.677;

clrscr();
printf("\n a = %d address = %u",a,&a);
printf("\n b = %f address = %u",b,&b);
printf("\n c = %c address = %u",c,&c);
printf("\n d = %lf address = %u",d,&d);

getch();
}
