/* for loop: repeats set of statments definite no of times
syntax:
for(<variable>=<initialvalue>;<condition>;<increment>)
{
body of loop;
}
program to read m numbers and print even nos sum,odd nos sum
*/
main()
{
int i,n,m;
int esum=0,osum=0;   /* esum even nos sum osum -odd number sum */

clrscr();
printf(" how many numbers ");scanf("%d",&m);

for(i=1;i<=m;i++)
{
printf("\n enter a number ");
scanf("%d",&n);
if (n%2==0) esum=esum+n; // i must be replaced by n to find esum,osum of
if (n%2!=0)  // ! is for not, && for and || for or
    osum=osum+n;    // any 10 numbers
}
printf("\n even no sum = %d",esum);
printf(" \n odd no sum = %d",osum);

getch();

}

