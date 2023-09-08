/* program to convert small case word upper case using udf with pointer */
char * upper(char *s) /* udf*/
{
int i;

for(i=0;*(s+i)!='\0';i++)
if (*(s+i)>='a' && *(s+i)<='z')
    *(s+i) = *(s+i)-32;

return s;
}
main()
{
char s[20];
printf("\n upper of swathi = %s",upper("swathi"));
puts("enter your name in lower case : ");gets(s);
puts(upper(s));
getch();
}