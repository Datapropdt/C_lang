/* function to print desired no of letters of a string from right side,
left side ,middle of the string
 0 1 2 3 4 5 6 7 8  9 10 11
 e n g i n e e r i  n  g \0
 1 2 3 4 5 6 7 8 9 10 11 12
 a function can be defined before the main() or after the main()
*/
left(char s[],int nc)
{
int i;
printf("\nthe desired string is  : ");
for(i=0;i<nc;i++) printf("%c",s[i]);
}
right(char s[],int nc)
{
int i,l,j;
for(i=0;s[i]!='\0';i++);   // here only to increment i to find the length
l=i-1;
j=l;
printf("\n string from last : ");
for(i=l;i>l-nc;i--) printf("%c",s[i]);

printf("\n string from last : ");
for(i=j-nc+1;s[i]!='\0';i++) printf("%c",s[i]);
}

main()
{
clrscr();
left("engineering",6);
right("engineering",4);
mid("engineering",5,4);

getch();
}

mid(char s[],int m,int n)
{
int i;
printf("\nthe desired string is  : ");
for(i=m-1;i<m+n-1;i++) printf("%c",s[i]);
}
