/* ftell() is the function that returns the file pointer location in opened
disk file.
fseek() is the function that places the file pointer at specified position*/
#include <stdio.h>
main()
{
int rno;
char name[40];
FILE *fp;
int i;

fp = fopen("student.dat","r");

clrscr();

printf("\n the file pointer is at %d ",ftell(fp));

fseek(fp,30,SEEK_SET);

fscanf(fp,"%d%s",&rno,name);

printf("\n the file pointer is at %d ",ftell(fp));

printf("\n rno = %d name = %s\n",rno,name);
fclose(fp);
}
