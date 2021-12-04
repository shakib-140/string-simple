#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[40]="shakib khan";
    char str2[40];
    int len,i,j;
    len=strlen(str1);
   // printf("string 1 length is=%d\n",len);
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]!='\0';

    printf(" main string is=%s\n",str1);
    printf(" revers string is=%s",str2);

    getch();
}
