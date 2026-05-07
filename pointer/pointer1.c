#include<stdio.h>
int main(){
int b[]={5,9,11};
int *q;
printf("enter the three no");
scanf("%d",&b);
q=b;
printf("%d",*q);
q=q+1;
printf("%d",*q);
q=q+1;
printf("%d",*q);
}


