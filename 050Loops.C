main()
{
int i,j,sp;

clrscr();

for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++) printf(" ");

for(j=1;j<=i;j++)
	printf(" *");

 printf("\n");
}
for(i=4;i>=1;i--)
{
for(sp=1;sp<=5-i;sp++) printf(" ");

for(j=1;j<=i;j++)
	printf(" *");

 printf("\n");
}
getch();
}