/* program to print reverse word */
main()
{
char word[10]="malayalam";
int i,l;

clrscr();

for (i=0;word[i]!='\0';i++)

printf("\n length = %d",i);  // i gives the length of word

l=i-1; // l gives location last character
puts("\n the given word is ");puts(word);
puts("\n the reverse word is : ");
printf("\t");
for(i=l;i>=0;i--) printf("%c",word[i]);

getch();

}