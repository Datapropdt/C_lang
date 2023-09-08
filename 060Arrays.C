/* program for matrix addition */
main()
{
int a[2][2]={1,1,1,1},b[2][2]={{2,2},{2,2}};
int c[2][2];
int i,j;

clrscr();
puts("the matrix addition is \n");
for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
      { c[i][j]=a[i][j]+b[i][j];
	printf("%2d",c[i][j]);
      }
    printf("\n");
}
getch();
}