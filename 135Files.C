/* files : till now the input or output is temporary to make it permenant
we need files.

 keyboard ----> memory -----> harddisk
 monitor <----        <----

to deal this we need a pointer of FILE type
a file can be opened using fopen(), closed using fclose()
file modes: w - write-opens by erasing old data, r-read a-append-to add new contents to existing one
r+ w+
*/
/* putc() is a function that places a character into a diskfile attached to
a  FILE pointer */

/* program to retrieve the contents of the file created by sc76.c program */

#include <stdio.h>
main()
{
char ch;
FILE *fp; /* FILE is available in stdio.h */

fp = fopen("chars.dat","r");/* r-read mode fopen(filename, file mode) */

clrscr();
printf("\n the file contents are  :\n");

while((ch=getc(fp))!=EOF)  /* getc() is used to get a character from diskfile
			      chars.dat attached to FILE pointer fp*/
{
printf("%c",ch);      /* putc(<charvariable>,<filepointer>); */
}
fclose(fp);
getch();
}