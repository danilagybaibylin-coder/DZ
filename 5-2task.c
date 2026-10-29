//6
#include <stdio.h>
#define HEIGHT 5

int main (void) 
{
    int mid = HEIGHT / 2;
    for(int i = 0; i < HEIGHT; i++)
    {
        int spaces, stars;

        int dist = i - mid;
        if (dist < 0) dist = -dist;
        spaces = mid - dist;
        stars = HEIGHT - 2 * spaces;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("&");
        }
        printf("\n");
    }
    return 0;
}