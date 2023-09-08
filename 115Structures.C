/*declaring structure variable as an array
passing structure members to a function as arguments
*/
struct student  /* defining structure */
{
int rno;
char name[50];
};
struct student s[3]; /* declaring structure variable as array */

display(int a, char x[])  // display is a function receive members as
{                          // arguments display can be any name
printf("\n rno = %d name = %s",a,x);
}

main()
{
int i;
clrscr();

for(i=0;i<3;i++)
{
printf("\n enter rno,name ");scanf("%d %s",&s[i].rno,s[i].name);
}
for(i=0;i<3;i++)
{
display(s[i].rno,s[i].name); /* passing structure members to a function as
			    arguments */
}
getch();
}


