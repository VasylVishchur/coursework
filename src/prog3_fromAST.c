#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAA;
   int16_t aAAAAAAAAAAA2;
   int16_t bBBBBBBBBBBBB;
   int16_t xXXXXXXXXXXXX;
   int16_t cCCCCCCCCCCC1;
   int16_t cCCCCCCCCCCC2;
   printf("Enter aAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBB);
   for (int16_t aAAAAAAAAAAA2 = aAAAAAAAAAAAA; aAAAAAAAAAAA2 <= bBBBBBBBBBBBB; aAAAAAAAAAAA2++)
   printf("%d\n", (aAAAAAAAAAAA2 * aAAAAAAAAAAA2));
   for (int16_t aAAAAAAAAAAA2 = bBBBBBBBBBBBB; aAAAAAAAAAAA2 <= aAAAAAAAAAAAA; aAAAAAAAAAAA2++)
   printf("%d\n", (aAAAAAAAAAAA2 * aAAAAAAAAAAA2));
   xXXXXXXXXXXXX = 0;
   cCCCCCCCCCCC1 = 0;
   while (cCCCCCCCCCCC1 < aAAAAAAAAAAAA)
   {
   {
   cCCCCCCCCCCC2 = 0;
   while (cCCCCCCCCCCC2 < bBBBBBBBBBBBB)
   {
   {
   xXXXXXXXXXXXX = (xXXXXXXXXXXXX + 1);
   cCCCCCCCCCCC2 = (cCCCCCCCCCCC2 + 1);
   }
   }
   cCCCCCCCCCCC1 = (cCCCCCCCCCCC1 + 1);
   }
   }
   printf("%d\n", xXXXXXXXXXXXX);
   xXXXXXXXXXXXX = 0;
   cCCCCCCCCCCC1 = 1;
   do
   {
   cCCCCCCCCCCC2 = 1;
   do
   {
   xXXXXXXXXXXXX = (xXXXXXXXXXXXX + 1);
   cCCCCCCCCCCC2 = (cCCCCCCCCCCC2 + 1);
   }
   while (!(cCCCCCCCCCCC2 > bBBBBBBBBBBBB));
   cCCCCCCCCCCC1 = (cCCCCCCCCCCC1 + 1);
   }
   while (!(cCCCCCCCCCCC1 > aAAAAAAAAAAAA));
   printf("%d\n", xXXXXXXXXXXXX);
   system("pause");
    return 0;
}
