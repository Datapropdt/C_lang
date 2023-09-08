/* word palindrome or not Ex: malayalam, nitin, liril madam rar */
main()
{
char word[30]="malayalam";
int i,l;
clrscr();
for(i=0;word[i]!='\0';i++);
l=i-1;
i=0;  /* it is must to initialize the i with 0 */
while(i<=l)
{
if (word[i]!=word[l])
   { puts("not palindrome word");
     getch();
     exit(0); // to exit from this program
//   break;
   }
i++;
l--;
}
puts("palindrome word");
getch();
}