#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
if(a==b&&b==c){
printf("Equilateral triangle");
}
else if(a==b||b==c||a==c){
printf("Isosceles triangle");
}
else{
printf("scalene triangle");
}


}
