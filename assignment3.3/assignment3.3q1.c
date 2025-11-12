# include<stdio.h>
int main()
{
    char ch;
    printf("enter charater");
    scanf("%c",&ch);
    if(ch >= 'A'&& ch <= 'Z'|| ch>='a'&&ch<='z')
    {
        printf("the no is alphabet");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special_ch");
    }
}
