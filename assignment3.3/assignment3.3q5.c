#include<stdio.h>
int main(){
char c;
printf("enter the ch ");

scanf("%c",&c);

if(c=='e'){
printf("Excellent");
}
else if(c=='v'){
printf("Very good");
}
else if(c=='G'){
printf("Good");
}
else if(c=='A'){
printf("Average");
}
else if(c=='F'){
printf("Fail");
}
else{
printf("Invaild grade");
}
}
