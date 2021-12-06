#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20],ch;
    int vowel,cons,digit,word,other,i=0;
    vowel=cons=digit=word=other=0;
    printf("enter a string=");
    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;

        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            cons++;


        else if(ch>='0'&&ch<='9')
            digit++;


        else if(ch==' ')
            word++;


        else
            other++;
        i++;

    }
    word++;

    printf("the number of vowel=%d\n",vowel);
    printf("the number of consunent=%d\n",cons);
    printf("the number of digit=%d\n",digit);
    printf("the number of word=%d\n",word);
    printf("the number of other=%d",other);


    getch();
}
