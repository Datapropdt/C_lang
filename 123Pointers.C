/* sorting an array using pointers */
main()
{
int a[5]={10,2,14,1,8},i,j,t;

for(i=0;i<4;i++)
for(j=0;j<4;j++)
if ( *(a+j) > *(a+j+1) )
   {
   t=*(a+j);
   *(a+j)=*(a+j+1);
   *(a+j+1)=t;
   }

printf("\n the sorted array is \n ");
for(i=0;i<5;i++) printf("%4d",a[i]);

getch();
}
