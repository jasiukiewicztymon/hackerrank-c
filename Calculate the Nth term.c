#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
  if (n >= 0) {
    n--;
    c += a + b;
    a = b;
    b = c;
    find_nth_term(n, a, b, c);      
  }
  return c;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    n -= 3;
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
