/* program to find all primes between 1-100 */
prime(int n)
{
int i,fc=0;

for(i=1;i<=n;i++)
if(n%i==0)
fc++;

if (fc==2)
   printf("%d   ",n);
}

main()
{
int i;
clrscr();
printf("\n prime numbers between 1-100  : \n");
for(i=1;i<=100;i++)
prime(i);
getch();
}