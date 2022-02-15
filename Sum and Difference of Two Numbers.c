#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float d, e;
    
    scanf("%d %d ", &a, &b);
    scanf("%f %f", &d, &e);
    
    printf("%d %d\n", (a + b), (a - b));
    printf("%.1f %.1f\n", (d + e), (d - e));
    
    return 0;
}
