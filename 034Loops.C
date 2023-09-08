/* program using ternary operator( takes three operends), entering values
separated by , */
main()
{
int a,b,big;

clrscr();
printf("\n enter a,b values separated by ,  : ");scanf("%d,%d",&a,&b);
//in the control string use , to give values separated by , in input
big = (a>b) ? a: b;

printf("\n biggest of %d and %d = %d",a,b,big);

getch();
}