/* gets() - get a string function is used take input with space
   fflush(stdin)  is used to clear input buffer contents
   fflush(stdout)  is used to clear output buffer contents
*/
//#include <conio.h>
#include <stdio.h>
main()
{
char name[50],name1[50];

clrscr();
printf("\n enter your name ");gets(name);
fflush(stdin);
printf("\n enter your last name");gets(name1);

printf("\n name = %s",name);
printf("\n name2 = %s",name1);

getch();
}