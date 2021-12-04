
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[]="shakib khan";
    char str2[]="shakib khan";
    int d=strcmp(str1,str2);
    if(d==0)
    {
     cout<<"string is equal";
    }
    else
        cout<<"string is not equal";
    getch();
}
