/* break: when ever this statement is encountered in a program the control
comes out of the loop
usage : break;
program to print numbers in the given range
*/
main()
{
long int m,n;

clrscr();

printf("\n enter m,n  :");
scanf("%ld%ld",&m,&n);

while(m<=n) /* i+=2 i = i +2 short hand operator*/
{
if (m==10) break;
printf("\t%ld \n",m);
m++;
}
getch();
}


