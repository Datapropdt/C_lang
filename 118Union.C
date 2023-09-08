/* union is used to represents heterogenous elements as onegroup.
   union is the keyword used to define a union and declare a variable

   Syntax: union <union name>   defining structure
	   {
	   <data type1> <variable1>;
	   <data type2> <variable2>;
	   <data type3> <variable3>;
	   };

   declaring union variable:
      union <union name> <variable name>;

   accessing union members either in scanf, printf

     <union variable name>.<member name>

*/

union student  /* defining union */
{
int rno;
char name[50];
};

union student s; /* declaring union variable */

main()
{
clrscr();
printf("\n size of union s = %d ",sizeof(s));

printf("\n enter rno ");scanf("%d",&s.rno);
printf("\n rno = %d ",s.rno);

printf("\n enter name ");scanf("%s",s.name);

printf("\n name = %s",s.name);

printf("\n rno = %d ",s.rno);    // gives rno wrong
printf("\n name = %s",s.name);

getch();
}


