#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define CIRCLE_RADIUS 100000
#define NR_POINTS 1000000

float random_number(float min, float max)
{
    return (((float)rand()/(float)RAND_MAX) * (max - min)) + min;
}

void montecarlo_pi(void)
{
    int i, count = 0;
    float x, y = 0;
    for(i=0;i<NR_POINTS;i++)
    {
        x = random_number(-CIRCLE_RADIUS, CIRCLE_RADIUS);
        y = random_number(-CIRCLE_RADIUS, CIRCLE_RADIUS);
        if( sqrt((x*x) + (y*y)) <= CIRCLE_RADIUS )
            count++;
    }
    printf("nr points in cycle: %d\n", count);
    printf("PI is: %f\n", 4 * ((float)count/((float)NR_POINTS)));
}

int main()
{
    srand(time(0));

    montecarlo_pi();

    return 0;
}
