
#include<stdlib.h>
#include<string.h>
char *changeL(char *s);
char *changeL(char *s)
{
    char *upper = s;
    int i;

    for ( i = 0; upper[i] != '\0'; i++)
    {
       if(upper[i] >= 'a' && upper[i] <= 'z')
	{
	   upper[i] -= 32;
	}
     }
   printf("%s\n", upper);
   return upper;
}

int main()
{
    char *first;
    char *second;

    clrscr();
    first = "HELLO My Name is LoL";
    printf("%s \n", first);
    second = changeL(first);
    printf("There is no error here\n\n");
    printf("%s\n", second);

    getch();
 }
