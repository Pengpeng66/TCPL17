#include <stdio.h>
float f(float x);
float a3,a2,a1,a0;

int main()
{
  float a,b;
  scanf("%f %f %f %f\n", &a3, &a2, &a1, &a0);
  scanf("%f %f\n", &a, &b);
  float mid;

  while(a<=b-0.001 && f(a)*f(b)<=0)
 {
  if(f(a)==0)
  {
   printf("%.2f",a);
   return 0;
  }
  if(f(b)==0)
  { 
   printf("%.2f",b);
   return 0;
  }
   mid=(a+b)/2;
   if(f(mid)*f(a)>0)

  {  a=mid;}
  else
  { b=mid;}

 }
  printf("%.2f",mid);
  return 0;
}
  float f(float x)
{
  float result;
  result=a3*x*x*x+a2*x*x+a1*x+a0;
  return result;

}
