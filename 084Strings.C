/* program to print desired no of letters of a string from left side */
main()
{
char s[50]="engineering";
int i,nc;

clrscr();

puts("the word is ");puts(s);
puts("\n how many letters you want from left side ");
scanf("%d",&nc);

printf("\nthe desired string is  : ");
for(i=0;i<nc;i++) printf("%c",s[i]);

getch();
}