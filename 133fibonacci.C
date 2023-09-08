/* fibonacci series */
main()
{
int n1=0,n2=1,n3,ln;


printf("\n enter last number ");scanf("%d",&ln);

printf("%d %d",n1,n2);
n3=n1+n2;
while(n3<ln)
{
n3=n1+n2;
printf(" %d",n3);
n1=n2;
n2=n3;
}

getch();
}