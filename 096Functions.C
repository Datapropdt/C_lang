/* 4. function with arguments with return statements*/

big(int a,int b)
{
if (a>b)
    return a;
else
    return b;
}
main()
{
int c,d;
clrscr();
printf("\n bigest = %d",big(10,20));
c=big(50,70);
d=big(90,45);     /* big(big(5,7),9) */
printf("\n c= %d d = %d ",c,d);
printf("\n sum of two big numbers = %d",(big(78,98)+big(56,76)));
printf("\n big of numbers = %d",big(198,big(56,76)));
printf("\n big of numbers = %d",big(big(78,98),big(56,76)));
getch();
}