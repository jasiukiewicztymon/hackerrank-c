#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, refer, c = n;
    scanf("%d", &n);
    // top
  	for (int i = 0; i < n - 1; i++) {
        // left
        for (int j = 0; j < n - 1; j++) {
            if (n - j >= n - i)
                printf("%d ", n - j);
            else
                printf("%d ", n - i);
        }
        // center
        printf("%d ", n - i);
        // right
        for (int j = n - 1; j > 0; j--) {
            if (n - j >= n - i)
                printf("%d ", n - j + 1);
            else
                printf("%d ", n - i);
        }
        printf("\n");
    }
    // center
    for (int i = n; i > 0; i--) { printf("%d ", i); }
    for (int i = 2; i <= n; i++) { printf("%d ", i); }
    printf("\n");
    // bottom
    for (int i = n - 1; i > 0; i--) {
        // left
        for (int j = 0; j < n - 1; j++) {
            if (n - j > n - i)
                printf("%d ", n - j);
            else
                printf("%d ", n - i + 1);
        }
        // center
        printf("%d ", n - i + 1);
        // right
        for (int j = n - 1; j > 0; j--) {
            if (n - j > n - i)
                printf("%d ", n - j + 1);
            else
                printf("%d ", n - i + 1);
        }
        printf("\n");
    }
    return 0;
}
