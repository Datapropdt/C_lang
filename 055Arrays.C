/* biggest,smallest of 10 nummbers */
void main()
{
int a[10];  /* a[0],a[1],a[2],a[3],a[4], a[5] contains null \0 */
int i,big,small;
clrscr();

printf("\n enter a[0] ");scanf("%d",&a[0]);
big=small=a[0];

for(i=1;i<10;i++)
{
printf("\n enter a[%d] ",i);
scanf("%d",&a[i]);
if (big < a[i]) big = a[i];
if (small > a[i]) small=a[i];
}
for(i=0;i<10;i++)
{
printf("\n a[%d] = %d",i,a[i]);
}

printf("\n big = %d small = %d",big,small);

getch();
}
