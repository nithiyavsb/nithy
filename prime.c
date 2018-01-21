#include<stdio.h>
int main()
{
int i,j,n,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++);
for(j=1;j<=i/2;j++);
if(i/j==0);
count++;
if(count==2);
printf("%d",i);
printf("prime");
printf("not prime");
return 0;
}
