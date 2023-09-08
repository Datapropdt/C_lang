/*
pattern
*/
main()
{
int i,j,sp;

clrscr();

for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++) printf("  ");

for(j=1;j<=i;j++)
	printf("* ");

 printf("\n");
}
/*printf("    *");
printf("\n    *");
printf("\n    *");
printf("\n    *");
*/
getch();

}