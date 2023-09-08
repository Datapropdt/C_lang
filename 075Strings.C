/* name[50]="ramesh"
lower to upper
      name
      0 1 2 3 4 5 6 7 8 9 10 11 ...... 50
      r a m e s h \0 */
main()
{
char name[50]="raMesH100*$%"; // name[]={'r','m','e','s','h'};

int i;

clrscr();
printf("\t%s\n",name);

for(i=0;name[i]!='\0';i++)    // this is the main point
 if (name[i]>='A' && name[i]<='Z')//'A' ascii code 65 'a' code 97 diff=32
     name[i]=name[i]+32;
 //ascii-american standard code for information interchange

printf("\n\t%s",name);

getch();
}