#include<stdio.h>
int main()
{
   int i=1,j=1;
    for(;;)
   {
      printf("%d*%d=%d ",i,j,i*j);
      j++;
      if(j==10)
      {
         i++;
         j=1;
         printf("\n");
      }

      if(i==10)
      {
          break;
      }


   }

}

