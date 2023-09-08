/*
pattern
i   j
1   1
2   2 2
3   3 3 3
4   4 4 4 4
5   5 5 5 5 5
*/
main()
{
int i,j;

clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
	printf("%2d",i);  /* j is replaced by i in sc32.c */

printf("\n");
}
getch();
}