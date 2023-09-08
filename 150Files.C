/* ftell() is the function that returns the file pointer location in opened
disk file.
fseek() is the function that places the file pointer at specified position
program to update the third record of student.dat file */
#include <stdio.h>
main()
{
int rno,r;
char name[40];
FILE *fp;
int i;

fp = fopen("student1.dat","r");

clrscr();

printf("enter record no to see : ");scanf("%d",&r);

fseek(fp,r*4,SEEK_SET);

fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));

fclose(fp);
getch();
}
