#<include<stdio.h>
#include<conio.h>
int main()
{
  int a=0,b=1,c,i,n;
  //asking for user data 
  printf("enter no of fibo sequence you wantt n>2");
  scanf("%d",&n);
  //logic
  for(i=1;i<=n;i++)
  { c=a+b;
   a=b;
   b=c;
   printf("%d",c);
  }
  getch();
}
