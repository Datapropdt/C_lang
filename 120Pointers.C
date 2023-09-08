/* pointer variable : is a special type variable which holds the address
of a variable. a variable holds the value. pointer variable holds the
address of it. it a can be declared using *.

int *p; p is a pointer variable pointed to integer type of data.
*/
main()
{
int a=10,*aa;  // aa -- address of a
float b = 4.56,*ab;
char c = 'C',*ac;
clrscr();

printf("\n a = %d address = %u",a,&a);
printf("\n b = %f address = %u",b,&b);
printf("\n c = %c address = %u",c,&c);
aa = &a;
ab = &b;
ac = &c;
printf("\n a = %d address = %u",*aa,aa);  // pointer variable with * gives
printf("\n b = %f address = %u",*ab,ab); // content, pointer variable without
printf("\n c = %c address = %u",*ac,ac); // * gives address

getch();
}
