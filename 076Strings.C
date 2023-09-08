/* name[50]="ramesh"
lower to upper
      name
      0 1 2 3 4 5 6 7 8 9 10 11 ...... 50
      r a m e s h \0 */

main()
{
char name[50]="raMesH100";

int i;

clrscr();
printf("%s\n",name);

for(i=0;i<name[i]!='\0';i++)    // this is the main point
//if (name[i]>='a' && name[i]<='z')  // A ascii code 65 a code 97  diff=32
   name[i]=name[i]-32;

printf("\n%s",name);

getch();
}