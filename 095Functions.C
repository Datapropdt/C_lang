/* 3. funciton with arguments without return statements*/

small(int a, int b)    /* the data types must be separately mentioned*/
{

if (a<b)
    printf("\n small = %d",a);
else
    printf("\n small = %d",b);
}
main()
{
clrscr();

small(6,7);

small(9,10);

small(30,20);

small(20,20);

getch();

}