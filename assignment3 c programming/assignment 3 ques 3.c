#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value x");
    scanf("%d",& x);
    printf("enter the value y");
    scanf("%d",&y);
    if (x>0&&y>0){
        printf("quadrant 1");
    }
    else if(x<0&&y>0){
        printf("quadrant 2");
    }
    else if(x>0&&y<0){
        printf("quadrant 3");
    }
    else if(x>0&&y<0){
        printf("quadrant 4");
    }
    else if (x==0&&y==0){
        printf("origin");
    }


}
