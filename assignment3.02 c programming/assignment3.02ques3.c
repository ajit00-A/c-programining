# include<stdio.h>
int main(){
float temperature_in_centigrade,temp;
printf("enter the temperature_in_centigrade");
scanf("%d",&temperature_in_centigrade);
if(temp<0){
printf("freezing weather");
}
else if(temp>=0&&temp<10){
printf("very cold weather");
}
else if(temp>=10&&temp<20){
printf("cold weather");
}
else if(temp>=20&&temp<30){
printf("normal in temp");
}
else if(temp>=30&&temp<40){
printf("its hot");
}
else{
printf("very hot");
}


}
