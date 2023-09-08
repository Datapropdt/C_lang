#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,k,l,ii,jj,kk,ll,mm,m,n,z;
clrscr();
printf("Please enter the rows and columns of matrix A \n");
scanf("%d""%d",&i,&j);
printf("Please enter the rows and colums of matrix B \n");
scanf("%d""%d",&k,&l);
if(j==k)
{
printf("Matrix is possible \n");

for(ii=0;ii<i;ii++)
for(jj=0;jj<j;jj++)
{
printf("Enter the values of A \n");
scanf("%d",&a[ii][jj]);
}
for(kk=0;kk<k;kk++)
for(ll=0;ll<l;ll++)
{
printf("Enter the values of B \n");
scanf("%d",&b[kk][ll]);
}
printf("Entered values for matrix A and B are \n");
for(ii=0;ii<i;ii++)
{
for(jj=0;jj<j;jj++)
printf("%4d",a[ii][jj]);
printf("\n");
}
printf("\n");
for(kk=0;kk<k;kk++)
{
for(ll=0;ll<l;ll++)
printf("%4d",b[kk][ll]);
printf("\n");
}

for(ii=0;ii<i;ii++)
{
for(jj=0;jj<j;jj++)
{
c[ii][mm]=0;
for(mm=0;mm<i;mm++)
{
c[ii][mm]=c[ii][mm]+(a[ii][mm]*b[mm][ll]);
}
}
}
printf("The product of Matrix A and B are \n");
for(ii=0;ii<i;ii++)
{
for(mm=0;mm<i;mm++)
printf("%4d",c[ii][mm]);
printf("\n");
}
}
else
printf("Matrix multiplication is not possible");

getch();
}