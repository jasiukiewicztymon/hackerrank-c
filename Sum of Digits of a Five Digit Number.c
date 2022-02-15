#include <stdio.h>

int main() {
	
    int n, res = 0;
    scanf("%d", &n);
    
    for (int i = 10; i < 1000000; i *= 10) {
        if (i / 10 != 0)
            res += (n % i) / (i / 10);
        else 
            res += n % i;
    }
    
    printf("%d", res);
    
    return 0;
}
