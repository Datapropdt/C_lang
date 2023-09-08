/* fread() is a function that read the contents from file to astructure variable
fread(<address of structvar>,sizeof(<strut variable>),<no of records,
<filepointer>)
*/
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

fp = fopen("stru.dat","r");
//clrscr();
fread(&s[0],sizeof(s[0]),5,fp);

for(i=0;i<5;i++)
{
printf("\n rno  : %d name : %s ",s[i].rno,s[i].name);
}
fclose(fp);
getch();
}


