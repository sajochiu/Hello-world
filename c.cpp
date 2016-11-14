#include<stdio.h>
int main()
{
   int x,y;
   while(x<=9)
   {
       while(y<=9)
       {
           printf("%d*%d=%d",x,y,x*y);
           if(y==9)
           printf("\n");
           y++;
 

       

        }
    x++;
   }
}



