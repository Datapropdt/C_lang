
/* program to print desired no of letters of a string from left side
 using an user defined function (udf)
 0 1 2 3 4 5 6 7 8  9 10
 e n g i n e e r i  n  g
 1 2 3 4 5 6 7 8 9 10 11
 */
left(char s[],int nc)
{
int i;

printf("\nthe desired string is  : ");
for(i=0;i<nc;i=i+1) printf("%c",s[i]);
}

main()
{
int nc;
clrscr();
printf("\n how many letters u want from leftside  : ");scanf("%d",&nc);
left("engineering",nc);
left("engineering",9);

getch();
}