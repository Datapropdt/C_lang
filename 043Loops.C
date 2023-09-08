/*
pattern
i  j
1   1
2   1 2
3   1 2 3
4   1 2 3 4
5   1 2 3 4 5

*/
main()
{
int i,j;

clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
	printf("%2d",i);

printf("\n");
}
getch();

}