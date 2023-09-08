aot() /* function definition or called programs */
{
float b,h,area;
printf("\nenter base value of triangle  :   ");scanf("%f",&b);
printf("\nenter height value of triangle  :   ");scanf("%f",&h);
area = b * h /2;
printf("\narea of triangle = %0.2f",area);
}
si() /* function definition */
{
float p,t,r,si;
printf("\nenter p ");scanf("%f",&p);
printf("\nenter t ");scanf("%f",&t);
printf("\nenter r ");scanf("%f",&r);
si = p*t*r/100;
printf(" simple interest = %f",si);
}
main() /* calling program */
{
clrscr();
aot(); /* calling the funtion or using the function */
si(); /* function calling */
aot();
si();
}
