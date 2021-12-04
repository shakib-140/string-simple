#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[]="shakib khan";
    char str2[]="shah alom";
    int d=strcmp(str1,str2);
    if(d==0)
    {
        printf("string are  equal");
    }
    else
        printf("string are not equal");
    getch();
}
