/* swith case: if and if contains 1000 conditions and if our value matches
999 the condition. to verify all 999 it takes some time. to save this time
we can use switch case
syntax
switch(<control variable>)
{
case <value1>: stmts; break;
case <value2>: stmts; break;
case <value3>: stmts; break;
case <value4>: stmts; break;
.
.
default:
	stmts;
}
*/
main()
{
int wd;

clrscr();

printf("enter week day(1-7)  ");scanf("%d",&wd);

switch(wd)
{
case 1: printf("\n monday"); break;
case 2: printf("\n tueday"); break;
case 3: printf("\n wednesday"); break;
case 4: printf("\n thursday"); break;
case 5: printf("\n friday"); break;
case 6: printf("\n saturday"); break;
case 7: printf("\n sunday"); break;

default:
      printf("\n not a valid day ");

}
getch();
}

