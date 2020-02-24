#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the value of a");
scanf("%d", &a);
printf("enter the value of b");
scanf("%d", &b);
printf("the two numbers a and b are %d %d \n \n",a,b);
temp=a;
a=b;
b=temp;
printf("the swapped numbers are %d %d \n \n",a,b);
}
