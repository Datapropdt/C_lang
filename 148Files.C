/* ftell() is the function that returns the file pointer location in opened
disk file.
fseek() is the function that places the file pointer at specified position*/
#include <stdio.h>
main()
{
int rno;
char name[15];
FILE *fp;
int i;

/*fp = fopen("student1.dat","w");

clrscr();

puts("enter rno name for 10 students of equal size : ");
for(i=0;i<10;i++)
{
scanf("%d%s",&rno,name);
fprintf(fp,"%d%s\n",rno,name);
}
fclose(fp);
*/
fp=fopen("student1.dat","r");

printf("\n the file pointer is at %d ",ftell(fp));

fseek(fp,0,SEEK_SET);

fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));
fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);

//fseek(fp,8,SEEK_SET);

printf("\n the file pointer is at %d ",ftell(fp));
fscanf(fp,"%d%s",&rno,name);

printf("\n the file pointer is at %d ",ftell(fp));

fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));

fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

getch();
fclose(fp);
}
