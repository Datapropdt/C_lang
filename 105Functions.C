/* recursion : when a function calls itself without completing its definition
.it is called recursive function
program to find the factorial of a number using recursion
*/
fon(int n)   // fon - factorial of a number
{
if (n==1||n==0)  // || or,  && and, ! not
    return 1;
else
    return n*fon(n-1);  /* without complete defining of fon(), we are using
			   here, hence fon() is a recursive function
			   5 * fon(4)
			   5 * 4 * fon(3)
			   5 * 4 * 3 * fon(2)
			   5 * 4 * 3 * 2 * fon(1)
			   5 * 4 * 3 * 2 * 1
			   */
}
main()
{
printf("\n factorial of 0 = %d ",fon(0));
printf("\n factorial of 5 = %d ",fon(5));
printf("\n factorial of 6 = %d ",fon(6));
getch();
}
