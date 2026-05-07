#include<stdio.h>
int main(){
int arr[10];
int *q,i;
q=arr;
printf("enter the value");
for(i=0; i<10; i=i+1){
scanf("%d",(q+i));
}

for(i=0; i<10; i=i+1){
printf("%d",*(q+i));
}







}
