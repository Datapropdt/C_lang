#include <stdio.h>
main()
{
float m1,m2,m3,tot,avg;
char ans;
back: /* back is a label */
clrscr();
/* gotoxy() is function that place the cursor at the desired location the
first value indicates col,second value indicates row  screen size 24
rows 80 columns */
gotoxy(32,1);printf("Data pro NAD ");
gotoxy(12,5);printf("  m1 :  ");
gotoxy(20,5);scanf("%f",&m1);
gotoxy(12,8);printf("  m2 :  ");
gotoxy(20,8);scanf("%f",&m2);
gotoxy(12,11);printf("  m3 :  ");
gotoxy(20,11);scanf("%f",&m3);
tot=m1+m2+m3;
avg=tot/3;
gotoxy(5,22);printf(" total  :  ");gotoxy(20,22);printf("%f",tot);
gotoxy(5,23);printf(" average  :  ");gotoxy(20,23);printf("%f",avg);fflush(stdin);
gotoxy(5,26);printf(" continue y/n :  ");gotoxy(50,24);scanf("%c",&ans);
if (ans=='y') goto back;   /* goto back; is a statement must be end with ; */

getch();
}

