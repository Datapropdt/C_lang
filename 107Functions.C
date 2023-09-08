/* function to print desired no of letters in the middle of a string
 0 1 2 3 4 5 6 7 8  9 10
 e n g i n e e r i  n  g
 1 2 3 4 5 6 7 8 9 10 11
*/
mid(char s[],int m,int n)
{
int i;

printf("\nthe desired string is  : ");

for(i=m-1;i<m+n-1;i++) printf("%c",s[i]);
}

main()
{
int a,b;

clrscr();

puts("the string is sridharani \n ");
printf("\n from where u want ");scanf("%d",&a);
printf("\n how many u want ");scanf("%d",&b);

mid("Bhanoj",a,b);
mid("Vijay",2,5);

mid("Guna Sekhar",5,4); /* function calling */

getch();
}












