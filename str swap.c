
#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[34]="shakib khan";
    char str2[34]="trioopto";
    char temp[24];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("the string 1 is=%s\n",str1);
    printf("the string 2 is=%s\n",str2);



    getch();
}
