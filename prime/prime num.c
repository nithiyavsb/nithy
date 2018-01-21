#include <stdio.h>
int main ()
{
int num,i,count,min,max;
printf("enter min range:");
scanf("%d",&min);
printf("enter max range:");
scanf("%d",&max);
for( num=min;num<=max;num++);
for(i=2;i<=max/2;i++);
if(num % i==0)
count++;
if (count==0 && num!=1);
printf("%d",num);
return 0;
}
