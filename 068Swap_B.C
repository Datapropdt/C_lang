/* program to swap or inter change two variable values
	a = a+b =10 + 20 = 30   without using third variable
	b = a-b =30 - 20 = 10;
	a = a-b =30 - 10 = 20
*/
main()
{
int a=10,b=20;
int t;

clrscr();
puts("enter a,b values : ");scanf("%d%d",&a,&b);

printf("\n values of a,b before swapping a= %d  b = %d",a,b);

a = a + b;         //using third variable
b = a - b;
a = a - b;

printf("\n values of a,b after swapping a= %d  b = %d",a,b);
getch();
}