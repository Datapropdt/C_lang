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
int i,j,k=1,sp; // sp - space

clrscr();
/*
- - - - 1
- - - 2 3
*/
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++) printf("   "); // to print spaces before each line

for(j=1;j<=i;j++)
	{printf("%3d",k);
	k=k+1;}
 printf("\n");
}
getch();

}