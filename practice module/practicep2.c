#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d+%d = %d\n",a,b,a+b);
printf("%d-%d = %d\n",a,b,a-b);
printf("%d*%d = %d\n",a,b,a*b);
float m=(a*1.0/b*1.0);
printf("%0.0f/%0.0f = %0.2f\n",a*1.0,b*1.0,m);
return 0;


}