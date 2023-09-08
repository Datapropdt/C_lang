/* conditional backward branching */
#include <stdio.h>
main()
{
char ans;
clrscr();
back:
printf("\n one");
printf("\n two");
printf("\n three");
printf("\n four");
printf("\n five");

printf("\n continue y/n  : ");
fflush(stdin);
scanf("%c",&ans);

if (ans=='y') goto back;

}