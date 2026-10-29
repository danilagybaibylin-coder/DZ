//18
#include <stdio.h>
int main (void)
{
    double arr[8];
    int i;
    for(i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            arr[i] = 0.0;
        }
        else if (i == 1)
        {
            arr[i] = 1.0;
        }
        else 
        {
            arr[i] = 2.0 * arr[i - 1] + arr[i - 2];
        }
   }
   for (i = 0; i < 8; i++)
   {
    printf("%.2f", arr[i]);
   }
   printf("\n");
   double max = arr[0];
   for (i = 1; i < 8; i++)
   {
    if (arr[i] > max)
    {
        max = arr[i];
    }
   }
   printf("%.2f\n", max);
   return 0;
}