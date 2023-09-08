/* type 3: function with arguments without return */
aot(float b,float h) /* function definition or called programs */
{
float area;
area = b * h /2;
printf("area of triangle = %0.2f",area);
}
si(float p, float t, float r) /* function definition */
{
float si;
si = p*t*r/100;
printf(" simple interest = %f",si);
}
main() /* calling program */
{
clrscr();
aot(6.6,7.8); /* calling the funtion or using the function */
si(900,3.4,4.4); /* function calling */
}
