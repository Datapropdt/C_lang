/* for loop: repeats set of statments definite no of times
syntax:

for(<variable>=<initialvalue>;<condition>;<increment>)
{
body of loop;
}
program to print 10..1  numbers
*/
main()
{
int i;

clrscr();

for(i=10;i>=1;i--)   /* decrement for loop i= i -1*/
{
//if (i%2==0)
    printf(" %d \t",i);
}
getch();
}
// ++ -- unary operators
// + - * / arithmetic or binary operators
/* big = (a>b) ? a: b;  ---> ? is the ternary operator */
// < > <= >= == relational operators
// && (and) || (or) ! (not) logical operators
// = assignment operator
// += -= *= /= short hand operators  a+=b => a = a +b
// & | >> << bitwise operators



