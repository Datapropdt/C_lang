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

   accessing structure members either in scanf, printf

     <structure variable name>.<member name>

*/

struct student  /* defining structure */
{
int rno;
char name[50];
};

struct student s= {28,"sarah"}; /* declaring & initializing structure variable */

main()
{
clrscr();
/*
printf("\n enter rno ");scanf("%d",&s.rno);
printf("\n enter name ");scanf("%s",s.name); */

printf("\n rno = %d name = %s",s.rno,s.name);

getch();
}


