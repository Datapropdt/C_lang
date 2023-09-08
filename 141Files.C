/* retrieving the multiple data type contents from a disk file using fscanf() */
#include <stdio.h>
main()
{
int rno;
char name[40];
FILE *fp;
int i;

fp = fopen("student2.dat","r");
clrscr();
printf("\n the file contents are : \n");

for(i=0;i<5;i++)
{
fscanf(fp,"%d%s",&rno,name); /* fscanf() is used to read the contents
				of a file */
printf("\n rno = %d name = %s\n",rno,name);
//if (i==10) getch(); // to stop for a while after printing 10 rows
}
fclose(fp);
getch();
}
