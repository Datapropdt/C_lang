/*
1 * 2 = 2        %d * %d = %d t n t*n
2 * 2 = 4
3 * 2 = 6
*/
main()
{
int m,t,n;

clrscr();
printf("\n enter table number ");scanf("%d",&t);
m=t;/* most important point */
for(t=1;t<=m;t++)
{
	for(n=1;n<=10;n++)  printf("\n %d * %d = %d",t,n,t*n);
puts("\n press a key to see next table \n");getch();
}
 getch();
}

