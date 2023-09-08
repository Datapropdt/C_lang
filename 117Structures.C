/*
assigning the address of a structure variable to a pointer */
struct student  /* defining structure */
{
int rno;
char name[50];
};
struct student s,*ps; /* declaring structure variable pointer */

main()
{
int i;

clrscr();

printf("\n enter rno,name ");scanf("%d%s",&s.rno,s.name);

ps = &s;  // assigning a structure variable to a pointer
printf("\n rno = %d name =%s",ps->rno,ps->name);   // -> arrow operator
getch();
}


