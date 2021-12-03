
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[]="shakib khan";
    int choice,i=0,leng=0;

    printf(" choice1=str length with  function:\n");
    printf("choice2=str length without  function:\n");
    printf("enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        int len=strlen(str);
        printf("the length is =%d",len);
    }
    break;
    case 2:

    {
        while(str[i]!='\0')
        {

            leng++;
            i++;
        }
        printf("the length is =%d",leng);
    }
    break;
    default:
        printf("not valid choice");

    }

    getch();
}
