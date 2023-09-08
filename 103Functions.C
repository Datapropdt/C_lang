/* program to find the given number is prime or not using function */
prime(int n)  // function definition
{
int i,fc=0; //fc - factors count

for(i=1;i<=n;i++)
	if(n%i==0) fc++;

if (fc==2)
   printf("\n %d is prime",n);
else
   printf("\n %d is not prime",n);

}

main()
{
clrscr();
prime(10); // calling or using the function
prime(7);
getch();
}