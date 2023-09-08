/* ftell()-is the function that returns the file pointer location in opened
disk file.
fseek()-is the function that places the file pointer at specified position
rewind()- is to place the file pointer at 0 */
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

fseek(fp,0,SEEK_SET);

fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));
fseek(fp,8,SEEK_SET);
fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

fseek(fp,9,SEEK_SET);
fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

fseek(fp,30,SEEK_SET);
fscanf(fp,"%d%s",&rno,name);
printf("\n rno = %d name = %s\n",rno,name);

/*fseek(fp,37,SEEK_SET);

fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));


printf("\n the file pointer is at %d ",ftell(fp));

fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);

printf("\n the file pointer is at %d ",ftell(fp));

fscanf(fp,"%d%s",&rno,name);

printf("\n rno = %d name = %s\n",rno,name);
*/

fclose(fp);
}
