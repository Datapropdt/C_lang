/* program to implement recursion: a function calls itself is recursion */
fon(int n)  /* calling the same function without completing its definiton */
{
if (n==1 || n==0)
    return 1;
else
    return n*fon(n-1);
    /* 5 * fon(4)
       5 * 4 * fon(3)
       5 * 4 * 3 * fon(2)
       5 * 4 * 3 * 2 * fon(1)
       5 * 4 * 3 * 2 * 1
     */
}
main()
{
clrscr();
printf("\n factorial of 5 = %d",fon(5));
getch();
}