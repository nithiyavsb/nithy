#include<stdio.h>
int main ()
{
int num,tem,sum=0,rem;
printf("\n enter a number:\t");
scanf("%d",& num);
tem=num;
while(num!=0)
sum= sum+(rem*rem*rem);
num=num/10;
printf("\n%d it an armstorng intergal\n",tem);
printf("\n%d is not armstorng intergal\n",tem);
return 0;
}
