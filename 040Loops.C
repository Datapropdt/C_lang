/*
program to find biggest of 10 numbers
*/
main()
{
long int i,n,big=0;

clrscr();
printf("\n enter 10 number ");

for(i=1;i<=10;i++)
{
scanf("%ld",&n);

if (big<n) big=n;

}
printf("big = %ld",big);
getch();
}








