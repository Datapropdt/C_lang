/* structure used to represents heterogenous elements as onegroup.
   struct is the keyword used to define a structure and declare a variable

   Syntax: struct <struct name>   defining structure
	   {
	   <data type1> <variable1>;
	   <data type2> <variable2>;
	   <data type3> <variable3>;
	   };

   declaring structure variable:
      struct <structure name> <variable name>;

   accessing structure members either in scanf, printf using . (dot)operator

     <structure variable name>.<member name>

     by using structures we can create our own data type
*/

struct student  /* defining structure or defining own data type*/
{
int rno,age;
char name[50];
};

struct student s; /* declaring structure variable */

main()
{

clrscr();


printf("\n size of structure student = %d",sizeof(s));
printf("\n size of rno = %d",sizeof(int));
printf("\n size of name = %d",sizeof(s.name));

printf("\n press any to proceed.....");

printf("\n enter rno ");scanf("%d",&s.rno);
printf("\n enter name ");scanf("%s",s.name);
printf("\n enter age ");scanf("%d",&s.age);
printf("\n rno = %d name = %s age = %d",s.rno,s.name,s.age);

getch();
}

