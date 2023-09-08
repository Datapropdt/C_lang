/*do while or post testloop
It is an exit condition checking loop.
this loop executes minmum 1 time even the condition is false
loop will continue as long as condition is true
loop will terminate when condition becomes false
while must be followed by ;

Syntax:
do
{
statements;
}
while(<conditon>);

progrm to print only even numbers in the given range
*/
main()
{
int m,n;
clrscr();
printf("\n enter start number of range ");scanf("%d",&m);
printf("\n enter last number of range ");scanf("%d",&n);
do
{
if (m%2==0)
    printf("  %d",m);  /* == is comparitive equal */
m=m+1;
} while(m<=n);         // while must end with ;

getch();
   //return 0-- not to get warning u can also use void before main
}

