/* program to read a matrix and print its transpose */
main()
{


int a[3][2],i,j;


for(i=0;i<3;i++)
for(j=0;j<2;j++)
{puts("enter value ");
scanf("%d",&a[i][j]);
}
puts("the transpose matrix is ");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++) printf("%3d",a[j][i]);
printf("\n");
}
getch();
}