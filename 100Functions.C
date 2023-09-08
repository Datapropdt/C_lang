/* program to print the factors of a given number n (10)*/
main()
{
int n=56,i;

clrscr();
printf("\n factors of %d = ",n);

for(i=1;i<=n;i++)
if(n%i==0) printf(" %d \n",i);

printf("\n ");
getch();
}
