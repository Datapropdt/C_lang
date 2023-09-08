#include <stdio.h>
main()
{
char ans;

do
{
printf("\n hai ");
printf("\n continue y/n : ");
fflush(stdin); // to clear input buffer contents
ans = getchar();
}
while(ans=='y');
getch();
}