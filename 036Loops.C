/*
program to find biggest of 5 numbers
*/
main()
{
long int i,n,big=0;

clrscr();

for(i=1;i<=5;i++)
{
printf("\n enter number ");
scanf("%ld",&n);

if (big<n) big=n;

}
printf("big = %ld",big);
getch();
}








