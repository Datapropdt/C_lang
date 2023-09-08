/* files : till now the input or output is temporary to make it permenant
we need files.

 keyboard ----> memory -----> harddisk
 monitor <----        <----

to deal this we need a pointer of FILE type
a file can be opened using fopen(), closed using fclose()
file modes: w - write-opens by erasing old data, r-read a-append-to add new contents to existing one
r+ w+
*/
/* putw() is a function that places a number into a diskfile attached to
   a  FILE pointer
program to store numbers into a diskfile
*/

#include <stdio.h>
main()
{
int i,n;
FILE *fp; /* FILE is available in stdio.h */

fp = fopen("nums.dat","w");  /* a - append mode fopen(filename, file mode) */
// in w-write mode previous data will be erased
for(i=0;i<5;i++)
{
printf("\n enter a number ");scanf("%d",&n);
putw(n,fp);      /* putw(<numeric var>,<filepointer>); writes the contents
			of numeric variable into file*/
}
fclose(fp);
}