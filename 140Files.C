/*writing the multiple data type contents to a disk file using fprintf() */
#include <stdio.h>
main()
{
int rno;
char name[40];
FILE *fp;

int i;

fp = fopen("student2.dat","w");

for(i=0;i<5;i++)
{
printf("\n enter rno,name ");scanf("%d%s",&rno,name);
fprintf(fp,"%d%s\n",rno,name); /* fprintf() is used to write the contents
				to a disk file */
}
fclose(fp);
}
