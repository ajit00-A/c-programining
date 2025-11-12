#include<stdio.h>
int main(){
int cp,sp;
printf("enter the value of cp");
scanf("%d",&cp);
printf("enter the value of sp");
scanf("%d",&sp);
if(sp>cp){
printf("profit");
}
else if(sp<cp){
printf("loss");
}
else if(sp==cp){
printf("no profit,no loss");
}


}
