#include<stdio.h>
int main()
{
    int a[4];
    int b[4];
    int i;

    printf("Enter the value of A. ");
    for(i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0;i<4;i++){
    b[i] = a[i];

    printf("%d", b[i]);
    }

}
