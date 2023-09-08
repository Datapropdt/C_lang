/* files : till now the input or output is temporary to make it permenant
we need files.
 keyboard ----> memory -----> harddisk
 monitor <----        <----
to deal this we need a pointer of FILE type
a file can be opened using fopen(), closed using fclose()
file modes: w - write-opens by erasing old data, r-read a-append-to add new
contents to existing one r+ w+
putc() is a function that places a character into a diskfile attached to
a  FILE pointer */
#include <stdio.h>     // it is must to use FILE
main()
{
char ch;
FILE *fp; /* FILE is available in stdio.h */

fp = fopen("chars.dat","a");  /* fopen(filename, file mode) will open
	     a disk file in hard disk to add new contents to the existing */
clrscr();
puts("\n enter text and end with ctrl+z ");
while((ch=getchar())!=EOF)  /* EOF -end of file ctrl+z */
{
putc(ch,fp);      /* putc(<charvariable>,<filepointer>);
		   it writes the ch variable content to a diskfile */
}
puts("chars.dat file created in hard disk");
fclose(fp);  /* an opened file can be closed using fclose() */
getch();
}