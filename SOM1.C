#include<stdio.h>
void main()
{
int a;
printf("Enter a value");
scanf("%d",&a);
if(a>0)
{
printf("THE ENTERED VALUE IS POSITIVE");
}
else if(a<0)
{
printf("THE ENTERED VALUE IS NEGATIVE");
}
else
{
printf("THE ENTERED VALUE IS ZERO");
}
}
