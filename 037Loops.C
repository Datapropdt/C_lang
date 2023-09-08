/* program to print mathematical table of a given number
1 * 2 = 2        %d * %d = %d t n t*n
2 * 2 = 4
3 * 2 = 6
*/
main()
{
int t,n;

clrscr();
printf("\n enter table number ");scanf("%d",&t);

for(n=1;n<=10;n++)
printf("\n %d * %d = %d",t,n,t*n);

getchar();
}

