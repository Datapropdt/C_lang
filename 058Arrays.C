/* 2 dimentional array or matrix reading and printing */
main()
{
int a[3][2];  /* declaration of 2 dimensional array */
int i,j;
clrscr();

for(i=0;i<3;i++)
   for(j=0;j<2;j++)
     {
     printf("\n enter a number ");
     scanf("%d",&a[i][j]);
     }

printf("\n the matrix is \n");

for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++)
   {
      printf("%4d",a[i][j]);
   }
   printf("\n");
   }
getch();
}