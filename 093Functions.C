/* 2. funciton without arguments with return statements or values*/
big()
{
int a,b;
printf("\n enter a,b ");scanf("%d%d",&a,&b);
if (a>b)
    return a;    /* it is the return statements */
else
    return b;
}
main()
{
int c,d;
clrscr();
printf("\n bigest = %d",big());   /* returning big to printf() */
c=big(); /* returning biggest to a variable */
d=big();
printf("big= %d big= %d ",c,d);
printf(" sum of two big numbers = %d",(big()+big()));
/* returning to an expression */
getch();
}