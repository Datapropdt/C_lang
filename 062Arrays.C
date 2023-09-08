/* matrix multiplication
3 x 2  2 x 2
1 1    2 3      6 8
1 1    4 5      6 8
1 1             6 8
*/
main()
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
for(i=0;i<3;i++)
for(j=0;j<2;j++)
  for(k=0;k<2;k++) c[i][j]= c[i][j] +  a[i][k]*b[k][j];

printf("\n the multiplication matrix is \n");
   for(i=0;i<3;i++)
   {
   for(j=0;j<2;j++) printf("%4d",c[i][j]);
   printf("\n");
   }
}
else
  printf("multiplication  not possible ");
getch();
return 0;
}
