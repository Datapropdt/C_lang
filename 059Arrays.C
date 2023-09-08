/*  i j
    0 0 1
    1 0 1
    2 0 1
 matrix transpose */
main()
{
int a[3][2];
int i,j;
clrscr();

for(i=0;i<3;i++)
   for(j=0;j<2;j++)
     {
     printf("\n enter a number ");
     scanf("%d",&a[i][j]);
     }

   printf("\n the given matrix is \n");
   for(i=0;i<3;i++)
   { for(j=0;j<2;j++) printf("%4d",a[i][j]);

     printf("\n");
   }

   printf("\n the transpose matrix is \n");
   for(i=0;i<2;i++)
   {
   for(j=0;j<3;j++) printf("%4d",a[j][i]);  /* inter changing i,j with j,i*/
   printf("\n");
   }
getch();
}