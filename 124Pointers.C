/* sorting an array using pointers */
main()
{
int a[5]={10,2,14,1,8},i,j,t;
int *aa; // aa is a pointer variable pointed to integer type of data
aa = a; //or aa = &a[0]; a is the array name gives the address of firstelement

for(i=0;i<4;i++)
for(j=0;j<4;j++)
if ( *(aa+j) > *(aa+j+1) )
   {
   t=*(aa+j);
   *(aa+j)=*(aa+j+1);
   *(aa+j+1)=t;
   }

printf("\n the sorted array is \n ");
for(i=0;i<5;i++) printf("%4d",a[i]);

getch();
}
