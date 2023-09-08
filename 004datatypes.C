/* program to read principle , time, rate of interest and find simple
interest */
main()
{
float p,t,r,si;

clrscr();
printf("enter p ");scanf("%f",p);
printf("enter t ");scanf("%f",t);
printf("enter r ");scanf("%f",r);

si = p*t*r/100;

printf(" simple interest = %f",si);

getch();
}

