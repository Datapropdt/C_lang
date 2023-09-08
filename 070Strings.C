/* scanf() does not accept space in charcter input gets() will accept space*/
#include <stdio.h>
main()
{
char name[50],name1[50];
char ans;

clrscr();

puts("press a letter ");
ans=getchar();  // scanf("%c",&ans);

fflush(stdin); /* to clear input buffer contents */
puts("you pressed ");putchar(ans);
getch();

clrscr();
printf("\n enter your name ");gets(name); // gets accept space in string
fflush(stdin);
printf("\n enter your would be ");scanf("%s",name1);

printf("\n name = %s",name);
printf("\n name2 = %s",name1);

getch();
}
