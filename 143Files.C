/* how to write structure contents to a disk file : fwrite()  - to write
   fread() - to read from file to structure  */
#include <stdio.h>
struct student
{
int rno;
char name[50];
};
struct student s[5];

main()
{
int i;
FILE *fp;

fp = fopen("stru.dat","w");

for(i=0;i<5;i++)
{
printf("enter rno,name : ");
scanf("%d%s",&s[i].rno,s[i].name);
}

fwrite(s,sizeof(s[0]),5,fp); /* fwrite() function writes the contents
				   from structure to diskfile */
fclose(fp);
}


