#include <stdio.h>

const char *names[] = {"one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    int a = 0;
    scanf("%d",&a);
    if (a < 1)
        return 1;
    
    if (a >= 1 && a <= 9)
        printf("%s",names[a-1]);
    else
        printf("Greater than 9");
    
    return 0;
}
