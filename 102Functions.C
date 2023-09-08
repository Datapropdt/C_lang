/* program to find the given number is prime or not */
void main()
{
int n,i,fc=0; // fc - factors count

clrscr();
puts("enter a number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
   if(n%i==0)
     fc++;  /* fc = fc + 1   */

if (fc==2)
   printf("%d is prime",n);
else
   printf("%d is not prime",n);
getch();
}