/* program to read base and height of a triangle and print its area */
main()
{

float b,h,area;

clrscr();

printf("enter base value of triangle  :   ");scanf("%f",&b);
printf("enter height value of triangle  :   ");scanf("%f",&h);

area = b * h /2;

printf("area of triangle = %0.2f",area);

getch();

}