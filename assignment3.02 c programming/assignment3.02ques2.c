# include<stdio.h>
int main(){
  int roll_no,marks,a,b,c;
  char name[50];
  float percentage;
printf("enter the roll_no");
scanf("%d",&roll_no);

printf("enter the name");
scanf("%s",&name);

printf("enter the marks of a: ");
scanf("%d",&a);

printf("enter the marks of b: ");
scanf("%d",&b);

printf("enter the marks of c: ");
scanf("%d",&c);

marks=(a+b+c);
printf(" marks= %d",marks);

percentage=(marks/300.0)*100;
printf("percentage= %f",percentage);




}
