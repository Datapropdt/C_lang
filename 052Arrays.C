/*arrays are used to store similar values identified by same name and differed by index number */

main()
{
int a[5];  /* a[0],a[1],a[2],a[3],a[4], a[5] contains null \0 */

clrscr();
printf("\n enter a[0] ");scanf("%d",&a[0]);
printf("\n enter b ");scanf("%d",&a[1]);
printf("\n enter c ");scanf("%d",&a[2]);
printf("\n enter d ");scanf("%d",&a[3]);
printf("\n enter e ");scanf("%d",&a[4]);

printf("\na = %d",a[0]);
printf("\nb = %d",a[1]);
printf("\nc = %d",a[2]);
printf("\nd = %d",a[3]);
printf("\ne = %d",a[4]);

getch();
}
