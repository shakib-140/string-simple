#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[40]="madam";
    char str2[20];
    int len,i,j;
    len=strlen(str1);
    printf("%d\n",len);
    for(i=len-1,j=0; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]!='\0';
    printf("the orginal string is=%s\n",str1);
    printf("the revers string is=%s\n",str2);
    int d=strcmp(str1,str2);
    if(d==0)
        printf("string are palindrom\n");
    else
        printf("string are not palindrom\n");
    getch();
}
