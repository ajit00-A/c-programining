#include<stdio.h>
int main(){
int angle1;
int angle2;
int angle3;
printf("enter the value of angle1");
scanf("%d",&angle1);
printf("enter the value of angle2");
scanf("%d",&angle2);
printf("enter the value of angle3");
scanf("%d",&angle3);
if(angle1+angle2+angle3==180){
printf("The triangle is valid");
}
else {
printf("The triangle is not valid");
}




}
