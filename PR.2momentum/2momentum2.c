#include <stdio.h>

int main()

{

   int a;
   float b, c, rs;

   printf("electricity units: ");
   scanf("%d", &a);

   if (a <= 50)
   {
      rs = a * 0.50;
   }

   else if (a <= 150)
   {
      rs = 25 + ((a - 50) * 0.75);
   }

   else if (a <= 250)
   {
      rs = 100 + ((a - 150) * 1.20);
   }

   else
      (250 < a);
   {
      rs = 220 + ((a - 250) * 1.50);
   }

   b = rs * 0.20;
   c = rs + b;

   printf("Electricity Bill = Rs. %.2f", c);

   return 0;
}