main()
{
int n;

printf("enter a number ");scanf("%d",&n);

if (n%1==0 && n%n==0)
   printf("prime");
else
   printf("not prime");
}