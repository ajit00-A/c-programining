#include<stdio.h>
int main(){
int radius,length,width, base,height;
float circle,rectangle,triangle;
float pi=3.14;

printf("enter the radius");
scanf("%d",&radius);

float area = pi*radius*radius;
printf("%.2f",area);

printf("enter the length");
printf("enter the width");
scanf("%d",&length);

scanf("%d",&width);

rectangle = length*width;
printf("%.2f",rectangle);

printf("enter the base");
scanf("%d",&base);

printf("enter the height");
scanf("%d",&height);

triangle = (1/2)*(base*height);
printf("%f",triangle);




}
