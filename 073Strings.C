
/* program to the given name in a line and each character in a line

     name[50]="ramesh"

      name
      0 1 2 3 4 5 6 7 8 9 10 11 ...... 50
      r a m e s h \0 <----------------     */
main()
{
char name[50]="ramesh";

int i;

clrscr();
printf("\t %s \n",name);

//for(i=0;i<20;i++)    // this is the main point
for(i=0;name[i]!='\0';i++)    // this is the main point
printf("\n\t %c",name[i]);

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