#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcd(int a,int b)
{
if(b==0)return a;
if(a<b)return gcd(b,a);
return gcd(a,a%b);
}
void main()
{
 int a,b,r;
 printf("Enter value of a & b:\n");
 scanf("%d %d",&a,&b);
 r=gcd(a,b);
 printf("gcd(%d,%d)=%d\n",a,b,r);
 getch();
 }
