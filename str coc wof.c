#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[30]="my name is ";
    char str2[]="opopipi";
    int i=0,j=0,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;

    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;

    }
    printf("%s",str1);


    getch();
}
