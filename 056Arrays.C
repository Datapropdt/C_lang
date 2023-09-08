/* program to read 20 numbers and print evensum,oddsum,no of even, no of odd*/
void main()
{
int a[5],i;             // ne - no of evens, no - no of odds
int es=0,os=0,ne=0,no=0; // es-even nos sum, os-odd nos sum

clrscr();
printf("\n enter 5 numbers : ");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
   { es = es + a[i];
    ne++; // or ne = ne + 1
   }
else
   {
   os=os+ a[i];
   no+=1;
   }
}
printf("\n even nos sum = %d no of evens = %d",es,ne);
printf("\n odd nos sum = %d no of odds = %d",os,no);
getch();
}


