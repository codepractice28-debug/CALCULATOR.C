#include<stdio.h>
void main()
{
float a;
float b;
int choice;
printf("\n======CALCULATOR=======\n");
printf("1.ADDITION\n");
printf("2.SUBRACTION\n");
printf("3.MULTIPLICATION\n");
printf("4.DIVISION\n");
printf("ENTER YOUR CHOICE : ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("ENTER FIRST NUMBER : ");
scanf("%f",&a);
printf("ENTER SECOND NUMBER : ");
scanf("%f",&b);
printf("%.2f",a+b);
break;
case 2:
printf("ENTER FIRST NUMBER : ");
scanf("%f",&a);
printf("ENTER SECOND NUMBER : ");
scanf("%f",&b);
printf("%.2f",a-b);
break;
case 3:
printf("ENTER FIRST NUMBER : ");
scanf("%f",&a);
printf("ENTER SECOND NUMBER : ");
scanf("%f",&b);
printf("%.2f",a*b);
break;
case 4:
printf("ENTER FIRST NUMBER : ");
scanf("%f",&a);
printf("ENTER SECOND NUMBER : ");
scanf("%f",&b);
printf("%.2f",a/b);
break;
default:
printf("INVALID CHOICE");
}
}

