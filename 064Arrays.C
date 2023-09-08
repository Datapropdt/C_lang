/* matrix multiplication
3 x 2  2 x 2
1 1    2 3      6 8
1 1    4 5      6 8
1 1             6 8
*/
void main()
{
int a[3][2]={1,1,1,1,1,1},b[2][2]={2,3,4,5},c[3][2]={0,0,0,0,0,0};
int i,j,k;  /* k for how many times to multiply for getting one element */
int m,n,p,q;

clrscr();
printf("\n enter A matrix size, B matrix size  ");
scanf("%d%d%d%d",&m,&n,&p,&q);

if(n==p)
{
printf("\n matrix mul is possible ");
   puts("enter A matrix : ");
   for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++) scanf("%d",&a[i][j]);
   }
   puts("enter B matrix : ");

   for(i=0;i<2;i++)
   {
   for(j=0;j<2;j++) scanf("%d",&b[i][j]);
   }

for(i=0;i<3;i++)
for(j=0;j<2;j++)
  for(k=0;k<2;k++) c[i][j]= c[i][j] +  a[i][k]*b[k][j];
   puts("A matrix is ");
   for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++) printf("%4d",a[i][j]);
   printf("\n");
   }
   puts("B matrix is ");

   for(i=0;i<2;i++)
   {
   for(j=0;j<2;j++) printf("%4d",b[i][j]);
   printf("\n");
   }
printf("\n the multiplication matrix is \n");
   for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++) printf("%4d",c[i][j]);
   printf("\n");
   }
}
else
  printf("mul not possible ");
getch();
}