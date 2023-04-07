#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a;
   scanf("%d",&a);
   if (a%5==0&&a%11==0)
    {
        printf("it is divisible by 5 and 11");
    }
   else if (a%5==0)
   {
       printf("it is divisible by 5 ");
   }
   else if (a%11==0)

   {
       printf("it is  divisible by 11");

   }


}
