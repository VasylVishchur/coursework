#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAA;
   int16_t bBBBBBBBBBBBB;
   int16_t cCCCCCCCCCCCC;
   printf("Enter aAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBB);
   printf("Enter cCCCCCCCCCCCC:");
   scanf("%hd", &cCCCCCCCCCCCC);
   if (aAAAAAAAAAAAA > bBBBBBBBBBBBB) 
   {
   if (aAAAAAAAAAAAA > cCCCCCCCCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cCCCCCCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", aAAAAAAAAAAAA);
   goto Outofif;
   }
   }
   if (bBBBBBBBBBBBB < cCCCCCCCCCCCC) 
   {
   printf("%d\n", cCCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", bBBBBBBBBBBBB);
   }
Outofif:
   if (((aAAAAAAAAAAAA == bBBBBBBBBBBBB && aAAAAAAAAAAAA == cCCCCCCCCCCCC) && bBBBBBBBBBBBB == cCCCCCCCCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aAAAAAAAAAAAA < 0 || bBBBBBBBBBBBB < 0) || cCCCCCCCCCCCC < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(aAAAAAAAAAAAA < (bBBBBBBBBBBBB + cCCCCCCCCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
