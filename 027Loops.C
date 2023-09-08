/* program to read a number and print sum of its digits
ex: if no is 345 result 12 */
main()
{
int n,r,sum=0;
puts("enter a number ");scanf("%d",&n);
	       /* printf("the reverse number is "); */
while(n!=0)
{
r = n % 10;  /* % is remainder operator  gives remainders */
sum = sum +r;  /* replace this with printf("%d",r); to get reverse no */
n = n / 10;   /* / is quotient operator give quotient */
}
printf("\n sum of the digits of given number = %d ",sum);
getch();
}
/*
345 % 10  = 5   345/10 = 34      10)3(0
34 % 10   = 4    34/10 =  3          0
3 % 10    = 3     3/10 =  0          3
*/