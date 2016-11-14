#include<stdio.h>
int main()
{
int i,o;
for(i=1;i<=9;i++)
for(o=1;o<=9;o++)
{
printf("%d*%d=%d ",i,o,i*o);
if(o==9)
printf("\n");

}


}
