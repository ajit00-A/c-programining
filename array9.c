#include<stdio.h>
int main(){
int a[5],b[5],c[5],i;

printf("enter the value of a");
for(i=0; i<5; i=i+1){
scanf("%d",&a[i]);
}

printf("enter the value of b");
for(i=0; i<5; i=i+1){
scanf("%d",&b[i]);
}

for(i=0; i<5; i=i+1){
c[i]=a[i]+b[i];

printf("%d",c[i]);
}
}
