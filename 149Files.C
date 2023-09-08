/* ftell() is the function that returns the file pointer location in opened
disk file.
fseek() is the function that places the file pointer at specified position
program to update the third record of student.dat file */
#include <stdio.h>
main()
{
int rno;
char name[40];
FILE *fp;
int i;

fp = fopen("student2.dat","r+");

clrscr();

printf("\n the file pointer is at %d ",ftell(fp));

fseek(fp,63,SEEK_SET);

printf("enter rno to update : ");scanf("%d",&rno);
printf("enter name to update : ");scanf("%s",name);
/*
rno=55;
strcpy(name,"sridhar");
*/
fprintf(fp,"\n%d%s",rno,name);

fclose(fp);
}
