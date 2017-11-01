#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iostream>

#define PI 3.14159625
int iterations = 10000;

int main ( )
{
    printf("topology: 1 3 1\n");
    double alpha;

    for ( int i=0;i<=iterations;++i)
    {
		alpha = 2.0 * PI * rand() / (double)(RAND_MAX);
		
		printf("in: %.3f \n",alpha);
		printf("out: %.3f \n",cos(alpha));
    }
    
    return 0;
}
