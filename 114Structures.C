/*
declaring structure variable as an array
*/
struct student  /* defining structure */
{
int rno;
char name[50];
};      /* ; is must and it indicates ending of structure definition */

struct student s[5]; /* declaring structure variable as array */

main()
{
int i;

clrscr();

for(i=0;i<5;i++)
{
printf("\n enter rno,name ");scanf("%d %s",&s[i].rno,s[i].name);
}

for(i=0;i<5;i++)
{
printf("\n rno = %d name = %s",s[i].rno,s[i].name);
}
getch();
}


