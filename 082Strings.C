/* program to print combine 2 strings into an third string */
main()
{
char s1[10]="happy",s2[10]="pongal",s3[20];
int i,j,k;

clrscr();
for (i=0,j=0; s1[i]!='\0'; i++,j++)
s3[j]=s1[i];

s3[j++]=' ';

for (k=0;s2[k]!='\0';k++)
s3[j++]=s2[k];

s3[j]='\0';

puts(s1);
puts(s2);
puts(s3);
printf("len of s3 = %d",strlen(s3));
getch();
}