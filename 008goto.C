/* to transfer the control from one point of the program to another is
called branching */
/*if the control transfers from current locaton to further statements
is called forward branching */
main()
{
clrscr();
printf("\n one");
printf("\n two");

goto last; /* statement */

printf("\n three");
printf("\n four");

last:  /*last is a label must be end with : */

printf("\n five");
getch();
}