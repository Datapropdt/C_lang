/*
pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
main()
{
int i,j,k=1;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)printf("%3d",k++);
/* %3d reserves 3 digit space for each number */
printf("\n");
}
getch();
}