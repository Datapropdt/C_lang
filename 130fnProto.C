/* function prototyping : when a function is returning other than integer
type we must specify the return type also along with function definition */
float avg(int a,int b)
{
return (float) (a+b)/2;  // keeping data type in () is called type casting
}
main()
{
printf("\n avg of 3,4 = %f",avg(3,4));
getch();
}