/*
     it is p29.c
     name[50]="ramesh"

      name
      0 1 2 3 4 5 6 7 8 9 10 11 ...... 50
      r a m e s h \0 */

main()
{
char name[50]="ramesh";

int i;

clrscr();
printf("%s \n",name);

//for(i=0;name[i]!='\0';i++)    // this is the main point
for(i=0;i<18;i++)    // it will print name with spaces

printf("\n%c",name[i]);

getch();
}

/*
Ramesh
R
a
m
e
s
h





*/