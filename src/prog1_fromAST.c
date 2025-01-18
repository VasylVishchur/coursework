#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aAAAAAAAAAAAA;
   int16_t bBBBBBBBBBBBB;
   int16_t xXXXXXXXXXXXX;
   int16_t yYYYYYYYYYYYY;
   printf("Enter aAAAAAAAAAAAA:");
   scanf("%hd", &aAAAAAAAAAAAA);
   printf("Enter bBBBBBBBBBBBB:");
   scanf("%hd", &bBBBBBBBBBBBB);
   printf("%d\n", (aAAAAAAAAAAAA + bBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAA - bBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAA * bBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAA / bBBBBBBBBBBBB));
   printf("%d\n", (aAAAAAAAAAAAA % bBBBBBBBBBBBB));
   xXXXXXXXXXXXX = (((aAAAAAAAAAAAA - bBBBBBBBBBBBB) * 10) + ((aAAAAAAAAAAAA + bBBBBBBBBBBBB) / 10));
   yYYYYYYYYYYYY = (xXXXXXXXXXXXX + (xXXXXXXXXXXXX % 10));
   printf("%d\n", xXXXXXXXXXXXX);
   printf("%d\n", yYYYYYYYYYYYY);
   system("pause");
    return 0;
}
