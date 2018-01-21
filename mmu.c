#include<stdio.h>
void main()
{
int a[6],b;
a[1]='a',a[2]='e',a[3]='i',a[4]='o',a[5]='u';
printf("enter the value b");
scanf("%c",&b);
if(a==b)
{
printf("vowel");
}
else
{
printf("consonant");
}
}
