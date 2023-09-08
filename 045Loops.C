/*
pattern
*
* *
* * *
* * * *
* * * * *
*/
main()
{
int i,j;
//char ch='*';
clrscr();

for(i=1;i<=5;i++)
{ for(j=1;j<=i;j++)
	printf("* ");  /* i or j is replaced by * */
  //	printf("%c ",ch);
 printf("\n");
}
getch();
}
