/*
declaring structure variable as an array
passing structure variable as argument to a function
*/
struct student  /* defining structure */
{
int rno;
char name[50];
};
struct student s[5]; /* declaring structure variable as arry */

display(struct student p)
{
printf("\n rno = %d name = %s",p.rno,p.name);
}

main()
{
int i;
clrscr();

for(i=0;i<5;i++)
{
printf("\n enter rno,name ");scanf("%d%s",&s[i].rno,s[i].name);
}

for(i=0;i<5;i++)
{
display(s[i]); /* passing entire structure  to a function as
		  argument */
}
getch();
}


