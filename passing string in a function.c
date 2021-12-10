#include<stdio.h>
#include<conio.h>
int i;
void display(char x[])
{
    while(x[i]!='\0')
    {
        printf("%c",x[i]);
        i++;
    }

}
int main()
{
    char str[]="shakib khan";
    display(str);



    getch();
}
