
/*
while(<condition>)
{
block of statements;
}
program to print even numbers in the given range
*/
main()
{
long int m,n;

clrscr();

printf("\n enter m,n  :");
scanf("%ld%ld",&m,&n);

while(m++<=n) /* i+=2 i = i +2 short hand operator*/
if (m%2!=0) // % is remainder operator
   printf("%ld \n",m); /* !=0 odd % is remainder operator
					   / quotient operator*/
getch();
}


