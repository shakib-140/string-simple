
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[]="shakib             khan";
    int i=0;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }

    getch();
}
