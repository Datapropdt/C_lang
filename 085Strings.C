/* program to print desired no of letters of a string from right side
   0 1 2 3 4 5 6 7 8 9 10  internal storing
   e n g i n e e r i n  g
   1 2 3 4 5 6 7 8 9 10 11  physical appearence
*/
main()
{
char s[50]="engineering";
int i,nc,l;

clrscr();
for(i=0;s[i]!='\0';i++);

l=i-1;
printf("%d",strlen(s));
puts("the given string is ");
puts(s);

puts("\n how many letters you want from right side ");
scanf("%d",&nc);

printf("\nthe desired string is  : ");
for(i=l-nc+1;s[i]!='\0';i++) printf("%c",s[i]);

printf("\n string from last : ");
for(i=l;i>l-nc;i--) printf("%c",s[i]);
getch();
}