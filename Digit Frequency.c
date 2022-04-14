#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[10];
    char c;
    
    for(int i = 0; i < 10; i++)
        num[i] = 0;

    while(scanf("%c", &c) == 1)
        if (c - '0' >= 0 && c - '0' <= 9)
            num[c - '0']++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", num[i]);
}
