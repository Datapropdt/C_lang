/* program to read a sentence and print no of words, leters, chars in it
name[50]="hello how are you" */
main()
{
char sent[100];

int i,sp=0;

clrscr();

puts("enter a sentence   :   ");
gets(sent);  /* scanf() does not take spaces in input */
printf("the given sentence is : %s\n",sent);

for(i=0;sent[i]!='\0';i++)    // this is the main point
if (sent[i]==' ') sp++;

printf("\n%s length = %d",sent,i);
printf("\n no of letters = %d",i-sp);
printf("\n no of words = %d",++sp);      //no of words = sp+1

getch();
}