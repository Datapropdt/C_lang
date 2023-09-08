/* 3. funciton with arguments without return statements*/

big(int a, int b)    /* the data types must be separately mentioned*/
{
if (a>b)
    printf("\n big = %d",a);
else
    printf("big= %d",b);
}
main()
{
int x=20,y=40;
clrscr();

big(6,7);

big(9,10);

big(30,20);

big(x,y);

getch();

}