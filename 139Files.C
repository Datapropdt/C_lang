 /* getw() is a function that retries a integer from a diskfile to a variable
 */
#include <stdio.h>
main()
{
int i,n;
FILE *fp; /* FILE is available in stdio.h */

fp = fopen("nums.dat","r");       /* fopen(filename, file mode) */

printf("the file contains : ");

for(i=0;i<5;i++)
{
n=getw(fp);      /* getw(<integervariable>); */
printf("%5d",n);
}
fclose(fp);
getch();
}



