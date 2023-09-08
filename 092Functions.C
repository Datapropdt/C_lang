/* function without arguments without return statements */

big()          /* function definition-called program */
{
int a,b;

printf("\n enter a,b ");scanf("%d%d",&a,&b);

if (a>b)
    printf("\nbig = %d",a);
else
    printf("\nbig = %d",b);
}

main()
{
clrscr();
big();  /* function calling - calling program */

big();
getch();
}

