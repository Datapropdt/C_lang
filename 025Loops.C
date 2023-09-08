/*
continue: when ever this encounters in a progrm it skips and go to
next iteration
usage: continue;
program to print even numbers in the given range
*/
main()
{
long int m,n;

clrscr();

printf("\n enter m,n  :");
scanf("%ld%ld",&m,&n);

while(m++<=n) /* i+=2 i = i +2 short hand operator*/
{
if (m%5==0) continue; // % is remainder operator
printf("\t%ld \n",m); /* !=0 odd % is remainder operator */
}
getch();
}


