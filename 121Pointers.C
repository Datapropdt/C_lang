/* array name gives the address of first element
   we can do arithmetic operations on pointers.
   if we add 1 to pointer gives the address of next location
*/
main()
{
int a[5]={45,54,34,23,88};
int *aa;
int i;

clrscr();
aa= &a; // or mahesh = &a
for(i=0;i<5;i++)
{
printf("\n a[%d] = %d address = %u",i,a[i],&a[i]); // normal array process
printf("\n a[%d] = %d address = %u",i,*(a+i),a+i); //  using array name
printf("\n a[%d] = %d address = %u",i,*(aa+i),aa+i);// using pointer variable

}
getch();
}