/* type 4: function with arguments with return */
float aot(float b,float h) /* function definition or called programs */
{
float area;
area = b * h /2;
return area;

}
float si(float p, float t, float r) /* function definition */
{
float si;
si = p*t*r/100;
return si;

}
main() /* calling program */
{
clrscr();
printf("area of triangle = %0.2f",aot(6.6,7.8)); /* calling the funtion or using the function */
printf(" simple interest = %f",si(900,3.4,4.4)); /* function calling */
}
