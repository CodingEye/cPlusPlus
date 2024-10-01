#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char nm [16][15]={"omkar","anil","arti","vishal","divyarth","rhutul"};

int x,y;
char s1[50] ;
char c;
main()


{
  clrscr();
  printf("string");

  gets(s1);
  for(x=0;x<16;x++)
  {
  y=strcmp(s1,nm[x]);
  if(y==0)
  {
  printf("name in list");
  printf("\n%s",s1);
  getch();
	break;

  }
  }
  if(y!=0)
  /*printf("\n name is not in list");*/
  return(x);
  getch();



}