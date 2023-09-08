/* function prototyping : when a function is returning other than integer
type we must specify the return type also along with function definition */
float avg(float a,float b)
{
return (a+b)/2;
}
main()
{
printf("\n avg of 3,4 = %f",avg(3,4));
getch();
}