/*
program to read a sentence and print no of vowels and consonents
name[50]="I love you"
*/
main()
{
char name[100];

int i,nv=0,nc=0; // nv - no of vowels, nc - no of consonents

clrscr();
puts("enter a sentence   :   ");
gets(name);  /* scanf() does not take spaces in input */
printf("the given sentence is : %s\n",name);

for(i=0;name[i]!='\0';i++)    // this is the main point
	switch(name[i])
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':nv++;break;
	default: nc++;
	}
printf("\n%s length = %d",name,i);
printf("\n no of vowels = %d",nv);
printf("\n no of consonents  = %d",nc);

getch();
}