/* sorting an array or bubble sorting */
main()
{
int a[5]={35,3,12,8,2};
int t,i,j;

clrscr();
for(i=0;i<4;i++)
for(j=0;j<4;j++)
if (a[j] > a[j+1])
    {
    t = a[j];
    a[j] = a[j+1];
    a[j+1] = t;
    }
puts("the sorted array is \n");
for(i=0;i<5;i++) printf(" %4d",a[i]);

getch();
}

