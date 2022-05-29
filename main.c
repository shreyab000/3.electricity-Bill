#include<stdio.h>
int main()
{
  float unit,charge,total;
  char name[20];
  printf("enter your name\n");
  gets(name);
  charge=0;
  printf("enter no. of units\n");
  scanf("%f",&unit);
  if(unit>=1&&unit<=200)
  {
    charge=0.8*unit;
  }
  else if(unit>=201&&unit<=300)
  {
    charge=0.8*(unit)+0.9*(unit-200);
  }
  else if(unit>=301)
  {
    charge=0.8*(unit)+0.9*(100)+1*(unit-300);
  }
  total=charge+100;
  if(total>400)
  {
    total=total+(0.15*total);
  }
  printf("\n\nELECTRICITY BILL\n\n");
  printf("------------\n");
  printf("NAME:%s\n",name);
  printf("TOTAL UNITS:%.2f\n",unit);
  printf("TOTAL BILL AMOUNT:%.2f\n",total);
  printf("-----------\n");
  return 0;
  }
