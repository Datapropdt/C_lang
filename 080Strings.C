/* string functions in string.h
strlen(s) - length  s is string variable
strupr(s) - to upper
strlwr(s) - to lower
strrev(s) - reverse
strcpy(t,s) - copy s to t
strcat(m,n) - combines m,n and stores in m
strcmp(m,n) - compares */
#include <string.h>
main()
{
char s1[10]="sarah",s2[10]="EVANGELIN";
char ds1[10];

clrscr();
printf("\n len of s1 = %d s2 =%d len of sastry=%d",
	    strlen(s1),strlen(s2),strlen("sastry"));
puts("\n upper : ");
printf(strupr(s1));
puts("\n lower : ");
printf(strlwr(s2));
puts("\n reve : ");
printf(strrev(s1));
strcpy(ds1,s1);
puts("\n ds1  : ");
printf(ds1);
strcat(s1,s2);
puts("\n");
puts(s1);

strcpy(s1,"raj");
strcpy(s2,"raju");
if(strcmp(s1,s2)==0)
	printf("equal ");
else
	printf("not ");
getch();
}


