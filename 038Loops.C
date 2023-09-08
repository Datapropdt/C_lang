/*
1 * 2 = 2        %d * %d = %d t n t*n
2 * 2 = 4
3 * 2 = 6
*/
main()
{
int m,t,n;

clrscr();
printf("\n last table number ");scanf("%d",&m);

for(t=1;t<=m;t++)
{
for(n=1;n<=10;n++)  printf("\n %d * %d = %d",t,n,t*n);

getch();
clrscr();
}
}

