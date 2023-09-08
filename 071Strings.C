#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char boyanswer[30];
char girlanswer[30];
printf("where did you both met for the first time?\n");
printf("boy: ");
fgets(boyanswer,30,stdin);
printf("girl: ");
fgets(girlanswer,30,stdin);
if(strcmp(boyanswer,girlanswer)==0){
printf("both are correct");
}else{
printf("ohh no,you are wrong!");
}
getch();
}