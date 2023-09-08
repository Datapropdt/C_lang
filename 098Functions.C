/* program to implement call by reference */
swap(int *a,int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
main()
{
int p=20,q=40;

printf("\n values before swapping \n");
printf("\n p = %d q = %d",p,q);
swap(&p,&q); /* passing addresses to a function */
printf("\n values after swapping \n");
printf("\n p = %d q = %d",p,q);
getch();
}

