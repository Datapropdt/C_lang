/*
program to read a sentence and print no of words, leters, chars in it
name[50]="I love you"
*/
main()
{
char name[100];

int i,nv=0,sp=0;

clrscr();

puts("enter a sentence   :   ");
gets(name);  /* scanf() does not take spaces in input */
printf("the given sentence is : %s\n",name);

for(i=0;name[i]!='\0';i++)    // this is the main point
{
if (name[i]=='a'|| name[i]=='e' || name[i]=='i'||name[i]=='o'||name[i]=='u') nv++;
if (name[i]==' ') sp++;
}
printf("\n%s length = %d",name,i);
printf("\n no of vowels = %d",nv);
printf("\n no of consonents  = %d",i-sp-nv);

getch();
}