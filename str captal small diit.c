#include<stdio.h>
#include<conio.h>
int main()
{
    char str[40],ch;
    int i,capital,small,digit, other;
    i=capital=small=digit=other=0;
    printf("enter a string=");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch>='a'&&ch<='z')
            small++;

        else if(ch>='A'&&ch<='Z')
            capital++;
        else if(ch>='0'&&ch<='9')
            digit++;
        else
            other++;
            i++;

    }
    printf("the total capital letter is=%d\n",capital);
    printf("the total small letter is=%d\n",small);
    printf("the total digit is=%d\n",digit);
    printf("the total others is=%d\n",other);




    getch();
}

