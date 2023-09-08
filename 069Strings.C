/* scanf() does not accept space in charcter input*/
#include <stdio.h>
main()
{
char name[50],name1[50];
char ans;

clrscr();
puts("press a letter ");
fflush(stdin); /* to clear input buffer contents */
ans=getchar();  // scanf("%c",&ans);

puts("you pressed ");putchar(ans);
puts("press any key ... ");
getch();

//clrscr();
printf("\n enter your name: ");scanf("%s",name);
printf("\n enter your last name: ");scanf("%s",name1);

printf("\n name = %s",name);
printf("\n name1 = %s",name1);

getch();
}
